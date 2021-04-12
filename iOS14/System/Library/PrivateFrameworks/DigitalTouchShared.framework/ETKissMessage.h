/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKTexture, SKUniform, NSMutableArray, NSMutableSet, KissNode;

@interface ETKissMessage : ETMessage {

	SKTexture* _atlas;
	SKUniform* _atlasUniform;
	NSMutableArray* _points;
	NSMutableArray* _angles;
	NSMutableArray* _delays;
	NSMutableSet* _kissMarkNodes;
	double _lastKissTime;
	KissNode* _lastKiss;
	BOOL _didDelegateWillStopPlaying;
	BOOL _didDelegateDidStopPlaying;

}
+(unsigned short)messageType;
+(id)_kissColor;
-(id)init;
-(void)stopPlaying;
-(id)archiveData;
-(id)initWithArchiveData:(id)arg1 ;
-(void)setParentMessage:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(void)displayInScene:(id)arg1 ;
-(BOOL)reachedSizeLimit;
-(void)addKissAtNormalizedPoint:(CGPoint)arg1 angle:(double)arg2 time:(double)arg3 toScene:(id)arg4 ;
-(void)_initAtlas;
-(BOOL)_leaveMarkAtDelay:(double)arg1 ;
-(void)_displayKissAtPoint:(CGPoint)arg1 angle:(double)arg2 leavesMark:(BOOL)arg3 inScene:(id)arg4 ;
-(BOOL)_hasKissesThatLeaveMark;
-(void)_notifyDelegateWillStopPlaying;
-(void)_notifyDelegateDidStopPlaying;
-(void)_setKissLeavesMark:(id)arg1 ;
@end

