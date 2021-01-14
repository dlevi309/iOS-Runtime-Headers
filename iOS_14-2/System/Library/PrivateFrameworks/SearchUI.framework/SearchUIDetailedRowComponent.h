/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

@class UIView, SearchUIDetailedRowModel;


@protocol SearchUIDetailedRowComponent <NSObject>
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@required
+(BOOL)supportsRowModel:(id)arg1;
-(void)updateWithRowModel:(id)arg1;
-(void)updateWithContacts:(id)arg1;
-(SearchUIDetailedRowModel *)rowModel;
-(void)setView:(id)arg1;
-(id)setupView;
-(UIView *)view;
-(void)setRowModel:(id)arg1;
-(void)setFeedbackDelegate:(id)arg1;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(BOOL)shouldVerticallyCenter;

@end

