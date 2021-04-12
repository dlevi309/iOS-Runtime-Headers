/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBSServiceFacilityClient, NSString;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable> {

	SBSServiceFacilityClient* _client;

}

@property (nonatomic,readonly) SBSServiceFacilityClient * client; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)serviceFacilityClientClass;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(SBSServiceFacilityClient *)client;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end

