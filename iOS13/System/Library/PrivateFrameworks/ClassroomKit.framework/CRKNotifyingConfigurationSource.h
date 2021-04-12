/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKConfigurationSource.h>

@protocol CRKConfigurationSource;
@class NSString;

@interface CRKNotifyingConfigurationSource : NSObject <CRKConfigurationSource> {

	id<CRKConfigurationSource> mBaseSource;
	NSString* mNotificationName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(id)initWithConfigurationSource:(id)arg1 notificationName:(id)arg2 ;
@end

