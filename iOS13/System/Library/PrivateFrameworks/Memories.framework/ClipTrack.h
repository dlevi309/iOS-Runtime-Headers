/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray;

@interface ClipTrack : NSObject {

	int _clipType;
	int _trackID;
	NSMutableArray* _clips;

}
+(id)nameForClipType:(int)arg1 trackID:(int)arg2 ;
-(id)clips;
-(int)clipType;
-(long long)indexOfClip:(id)arg1 ;
-(void)removeClip:(id)arg1 ;
-(id)initWithClipType:(int)arg1 trackID:(int)arg2 ;
-(id)trackName;
-(void)addClip:(id)arg1 ;
-(void)insertClip:(id)arg1 atIndex:(long long)arg2 ;
@end

