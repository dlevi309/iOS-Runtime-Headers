/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFTimer.h>

@class NSSet, NSString, NSArray;

@interface HMDCameraSnapshotNotificationTimer : HMFTimer {

	NSSet* _changedCharacteristics;
	NSString* _sessionID;
	NSArray* _postedBulletins;

}

@property (nonatomic,readonly) NSSet * changedCharacteristics;              //@synthesize changedCharacteristics=_changedCharacteristics - In the implementation block
@property (nonatomic,readonly) NSString * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSArray * postedBulletins;                     //@synthesize postedBulletins=_postedBulletins - In the implementation block
-(NSString *)sessionID;
-(id)initWithCameraSessionID:(id)arg1 changedCharacteristics:(id)arg2 timeInterval:(double)arg3 ;
-(NSArray *)postedBulletins;
-(NSSet *)changedCharacteristics;
-(void)setPostedBulletins:(NSArray *)arg1 ;
@end

