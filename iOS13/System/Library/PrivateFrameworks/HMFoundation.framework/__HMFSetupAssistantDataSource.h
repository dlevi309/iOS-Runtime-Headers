/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoMigrationDataSource.h>

@protocol HMFSystemInfoMigrationDataSourceDelegate;
@class NSString;

@interface __HMFSetupAssistantDataSource : HMFObject <HMFSystemInfoMigrationDataSource> {

	id<HMFSystemInfoMigrationDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
-(id)init;
-(void)dealloc;
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HMFSystemInfoMigrationDataSourceDelegate>)arg1 ;
-(BOOL)isMigrating;
@end

