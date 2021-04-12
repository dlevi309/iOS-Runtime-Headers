/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willSwitchUser;
-(id<PLCloudUserSessionHandling>)sessionHandler;
-(void)setSessionHandler:(id<PLCloudUserSessionHandling>)arg1 ;
-(void)dealloc;
@end

