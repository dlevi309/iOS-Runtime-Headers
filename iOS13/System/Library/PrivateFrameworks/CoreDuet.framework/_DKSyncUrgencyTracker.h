/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject {

	unsigned long long _urgency;
	NSMutableDictionary* _urgencies;

}
+(id)sharedInstance;
-(unsigned long long)currentUrgency;
-(void)updateUrgency:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)ageUrgencies;
-(id)allUrgencies;
-(void)recomputeUrgency;
-(unsigned long long)urgencyForClient:(id)arg1 ;
@end

