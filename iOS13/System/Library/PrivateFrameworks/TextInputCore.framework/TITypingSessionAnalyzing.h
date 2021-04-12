/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

@class TITypingSession, TITypingSessionAligned;


@protocol TITypingSessionAnalyzing <NSObject>
@property (nonatomic,retain) id<TIUserModeling> userModel; 
@property (nonatomic,retain) TITypingSession * lastSessionAnalyzed; 
@property (nonatomic,retain) TITypingSessionAligned * lastAlignmentAnalyzed; 
@required
-(BOOL)analyze:(id)arg1 alignedSession:(id)arg2;
-(id<TIUserModeling>)userModel;
-(void)setUserModel:(id)arg1;
-(TITypingSession *)lastSessionAnalyzed;
-(void)setLastSessionAnalyzed:(id)arg1;
-(TITypingSessionAligned *)lastAlignmentAnalyzed;
-(void)setLastAlignmentAnalyzed:(id)arg1;

@end

