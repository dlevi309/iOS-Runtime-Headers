/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject {

	CMMotionManager* _motion;
	NSHashTable* _clients;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(BOOL)isClientRegistered:(id)arg1 ;
-(void)updateWithMotion:(id)arg1 ;
@end

