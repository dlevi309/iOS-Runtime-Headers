/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoMigrationDataSource.h>

@protocol HMFSystemInfoMigrationDataSourceDelegate;
@class NSString;

@interface __HMFSetupAssistantDataSource : HMFObject <HMFSystemInfoMigrationDataSource> {

	id<HMFSystemInfoMigrationDataSourceDelegate> _delegate;

}

@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;
-(BOOL)isMigrating;
-(void)setDelegate:(id<HMFSystemInfoMigrationDataSourceDelegate>)arg1 ;
-(void)dealloc;
@end

