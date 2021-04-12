/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIDetailedRowComponent.h>

@protocol SearchUIFeedbackDelegate, SearchUIAccessoryViewDelegate;
@class SearchUIDetailedRowModel, UIView, NSString;

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent> {

	SearchUIDetailedRowModel* rowModel;
	UIView* view;
	id<SearchUIFeedbackDelegate> feedbackDelegate;
	id<SearchUIAccessoryViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * view; 
@property (__weak) id<SearchUIAccessoryViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
+(BOOL)supportsRowModel:(id)arg1 ;
+(Class)accessoryViewClassForRowModel:(id)arg1 ;
-(id)init;
-(unsigned long long)type;
-(id<SearchUIAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<SearchUIAccessoryViewDelegate>)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)hide;
-(void)updateWithContacts:(id)arg1 ;
-(id)setupView;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)buttonPressed;
-(SearchUIDetailedRowModel *)rowModel;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2 ;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(void)setRowModel:(SearchUIDetailedRowModel *)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id)controlInView:(id)arg1 ;
@end

