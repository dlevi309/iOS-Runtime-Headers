/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKConversationListCellLayout : NSObject {

	BOOL _invalid;
	BOOL _shouldShowChevron;
	double _summaryLabelCapFrameYOrigin;
	double _trailingLayoutMarginSize;
	CGRect _tableBounds;
	CGRect _summaryFrame;
	CGRect _dateFrame;
	CGRect _senderFrame;
	CGRect _chevronFrame;
	CGRect _unreadFrame;

}

@property (assign,nonatomic) BOOL invalid;                                    //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) BOOL shouldShowChevron;                          //@synthesize shouldShowChevron=_shouldShowChevron - In the implementation block
@property (assign,nonatomic) CGRect tableBounds;                              //@synthesize tableBounds=_tableBounds - In the implementation block
@property (assign,nonatomic) CGRect summaryFrame;                             //@synthesize summaryFrame=_summaryFrame - In the implementation block
@property (assign,nonatomic) CGRect dateFrame;                                //@synthesize dateFrame=_dateFrame - In the implementation block
@property (assign,nonatomic) CGRect senderFrame;                              //@synthesize senderFrame=_senderFrame - In the implementation block
@property (assign,nonatomic) CGRect chevronFrame;                             //@synthesize chevronFrame=_chevronFrame - In the implementation block
@property (assign,nonatomic) CGRect unreadFrame;                              //@synthesize unreadFrame=_unreadFrame - In the implementation block
@property (assign,nonatomic) double summaryLabelCapFrameYOrigin;              //@synthesize summaryLabelCapFrameYOrigin=_summaryLabelCapFrameYOrigin - In the implementation block
@property (assign,nonatomic) double trailingLayoutMarginSize;                 //@synthesize trailingLayoutMarginSize=_trailingLayoutMarginSize - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)invalidate;
-(BOOL)invalid;
-(CGRect)chevronFrame;
-(void)setChevronFrame:(CGRect)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(CGRect)tableBounds;
-(void)setShouldShowChevron:(BOOL)arg1 ;
-(void)setTableBounds:(CGRect)arg1 ;
-(BOOL)shouldShowChevron;
-(CGRect)summaryFrame;
-(void)setSummaryFrame:(CGRect)arg1 ;
-(CGRect)dateFrame;
-(void)setDateFrame:(CGRect)arg1 ;
-(CGRect)senderFrame;
-(void)setSenderFrame:(CGRect)arg1 ;
-(CGRect)unreadFrame;
-(void)setUnreadFrame:(CGRect)arg1 ;
-(double)summaryLabelCapFrameYOrigin;
-(void)setSummaryLabelCapFrameYOrigin:(double)arg1 ;
-(double)trailingLayoutMarginSize;
-(void)setTrailingLayoutMarginSize:(double)arg1 ;
@end

