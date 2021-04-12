/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

@class UIView, SearchUIDetailedRowModel;


@protocol SearchUIDetailedRowComponent <NSObject>
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@required
+(BOOL)supportsRowModel:(id)arg1;
-(UIView *)view;
-(void)setView:(id)arg1;
-(void)updateWithContacts:(id)arg1;
-(id)setupView;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(SearchUIDetailedRowModel *)rowModel;
-(void)updateWithRowModel:(id)arg1;
-(BOOL)shouldVerticallyCenter;
-(void)setRowModel:(id)arg1;
-(void)setFeedbackDelegate:(id)arg1;

@end

