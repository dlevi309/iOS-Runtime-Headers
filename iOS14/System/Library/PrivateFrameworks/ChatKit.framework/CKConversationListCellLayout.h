/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKConversationListCellLayout : NSObject {

	BOOL _shouldShowChevron;
	BOOL _shouldShowAvatarView;
	BOOL _invalid;
	double _tableViewWidth;
	double _summaryLabelCapFrameYOrigin;
	double _trailingLayoutMarginSize;
	double _contentViewWidth;
	double _widthForDeterminingAvatarVisibility;
	double _lastUsedDisplayScale;
	double _cellHeight;
	CGRect _summaryFrame;
	CGRect _dateFrame;
	CGRect _senderFrame;
	CGRect _chevronFrame;
	CGRect _unreadFrame;
	CGRect _avatarFrame;

}

@property (assign,nonatomic) BOOL invalid;                                            //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) double contentViewWidth;                                 //@synthesize contentViewWidth=_contentViewWidth - In the implementation block
@property (assign,nonatomic) double widthForDeterminingAvatarVisibility;              //@synthesize widthForDeterminingAvatarVisibility=_widthForDeterminingAvatarVisibility - In the implementation block
@property (assign,nonatomic) double lastUsedDisplayScale;                             //@synthesize lastUsedDisplayScale=_lastUsedDisplayScale - In the implementation block
@property (assign,nonatomic) double cellHeight;                                       //@synthesize cellHeight=_cellHeight - In the implementation block
@property (assign,nonatomic) double tableViewWidth;                                   //@synthesize tableViewWidth=_tableViewWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldShowChevron;                                  //@synthesize shouldShowChevron=_shouldShowChevron - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAvatarView;                               //@synthesize shouldShowAvatarView=_shouldShowAvatarView - In the implementation block
@property (assign,nonatomic) CGRect summaryFrame;                                     //@synthesize summaryFrame=_summaryFrame - In the implementation block
@property (assign,nonatomic) CGRect dateFrame;                                        //@synthesize dateFrame=_dateFrame - In the implementation block
@property (assign,nonatomic) CGRect senderFrame;                                      //@synthesize senderFrame=_senderFrame - In the implementation block
@property (assign,nonatomic) CGRect chevronFrame;                                     //@synthesize chevronFrame=_chevronFrame - In the implementation block
@property (assign,nonatomic) CGRect unreadFrame;                                      //@synthesize unreadFrame=_unreadFrame - In the implementation block
@property (assign,nonatomic) CGRect avatarFrame;                                      //@synthesize avatarFrame=_avatarFrame - In the implementation block
@property (assign,nonatomic) double summaryLabelCapFrameYOrigin;                      //@synthesize summaryLabelCapFrameYOrigin=_summaryLabelCapFrameYOrigin - In the implementation block
@property (assign,nonatomic) double trailingLayoutMarginSize;                         //@synthesize trailingLayoutMarginSize=_trailingLayoutMarginSize - In the implementation block
+(id)sharedInstance;
-(double)cellHeightForDisplayScale:(double)arg1 ;
-(id)init;
-(BOOL)invalid;
-(CGRect)dateFrame;
-(void)setInvalid:(BOOL)arg1 ;
-(CGRect)avatarFrame;
-(double)cellHeight;
-(CGRect)senderFrame;
-(void)invalidate;
-(CGRect)unreadFrame;
-(BOOL)shouldShowAvatarView;
-(void)setAvatarFrame:(CGRect)arg1 ;
-(void)setShouldShowChevron:(BOOL)arg1 ;
-(void)setTableViewWidth:(double)arg1 ;
-(double)tableViewWidth;
-(CGRect)summaryFrame;
-(double)widthForDeterminingAvatarVisibility;
-(CGRect)chevronFrame;
-(void)setChevronFrame:(CGRect)arg1 ;
-(void)setDateFrame:(CGRect)arg1 ;
-(void)setCellHeight:(double)arg1 ;
-(double)lastUsedDisplayScale;
-(void)setLastUsedDisplayScale:(double)arg1 ;
-(void)setUnreadFrame:(CGRect)arg1 ;
-(double)summaryLabelCapFrameYOrigin;
-(double)contentViewWidth;
-(BOOL)isValidForContentViewWidth:(double)arg1 widthForDeterminingAvatarVisibility:(double)arg2 ;
-(void)setShouldShowAvatarView:(BOOL)arg1 ;
-(void)setSummaryFrame:(CGRect)arg1 ;
-(void)markAsValidForContentViewWidth:(double)arg1 widthForDeterminingAvatarVisibility:(double)arg2 ;
-(BOOL)shouldShowChevron;
-(void)setSenderFrame:(CGRect)arg1 ;
-(void)setSummaryLabelCapFrameYOrigin:(double)arg1 ;
-(double)trailingLayoutMarginSize;
-(void)setTrailingLayoutMarginSize:(double)arg1 ;
-(void)setContentViewWidth:(double)arg1 ;
-(void)setWidthForDeterminingAvatarVisibility:(double)arg1 ;
@end

