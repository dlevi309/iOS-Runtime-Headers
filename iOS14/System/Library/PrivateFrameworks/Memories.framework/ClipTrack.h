/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeClip:(id)arg1 ;
-(int)clipType;
-(id)initWithClipType:(int)arg1 trackID:(int)arg2 ;
-(id)trackName;
-(void)addClip:(id)arg1 ;
-(void)insertClip:(id)arg1 atIndex:(long long)arg2 ;
-(long long)indexOfClip:(id)arg1 ;
@end

