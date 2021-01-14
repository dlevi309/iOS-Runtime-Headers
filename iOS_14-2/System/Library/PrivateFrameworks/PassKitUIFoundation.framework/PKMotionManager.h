/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject {

	CMMotionManager* _motion;
	NSHashTable* _clients;

}
+(id)sharedManager;
-(id)init;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(void)dealloc;
-(BOOL)isClientRegistered:(id)arg1 ;
-(void)updateWithMotion:(id)arg1 ;
@end

