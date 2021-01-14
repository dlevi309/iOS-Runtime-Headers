/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)changedCharacteristics;
-(id)initWithCameraSessionID:(id)arg1 changedCharacteristics:(id)arg2 timeInterval:(double)arg3 ;
-(NSArray *)postedBulletins;
-(void)setPostedBulletins:(NSArray *)arg1 ;
@end

