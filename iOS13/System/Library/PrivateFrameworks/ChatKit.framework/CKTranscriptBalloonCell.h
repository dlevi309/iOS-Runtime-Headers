/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageContentCell.h>

@class CKBalloonView;

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell {

	BOOL _mayReparentPluginViews;
	CKBalloonView* _balloonView;

}

@property (nonatomic,retain) CKBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (assign,nonatomic) BOOL mayReparentPluginViews;              //@synthesize mayReparentPluginViews=_mayReparentPluginViews - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)setMayReparentPluginViews:(BOOL)arg1 ;
-(void)setAnimationPauseReasons:(long long)arg1 ;
-(void)willLayoutDrawerLabelFrame:(CGRect*)arg1 ;
-(id)messageDisplayView;
-(BOOL)mayReparentPluginViews;
-(void)configureForChatItem:(id)arg1 ;
@end

