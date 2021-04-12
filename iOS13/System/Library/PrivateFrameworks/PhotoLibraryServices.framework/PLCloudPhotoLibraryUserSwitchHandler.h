/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/UMUserSwitchStakeholder.h>

@protocol PLCloudUserSessionHandling;
@class NSString;

@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject <UMUserSwitchStakeholder> {

	id<PLCloudUserSessionHandling> _sessionHandler;

}

@property (retain) id<PLCloudUserSessionHandling> sessionHandler;              //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)willSwitchUser;
-(void)setSessionHandler:(id<PLCloudUserSessionHandling>)arg1 ;
-(id<PLCloudUserSessionHandling>)sessionHandler;
@end

