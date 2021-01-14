/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
+(Class)accessoryViewClassForRowModel:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)init;
-(void)updateWithContacts:(id)arg1 ;
-(id<SearchUIAccessoryViewDelegate>)delegate;
-(SearchUIDetailedRowModel *)rowModel;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(void)setView:(UIView *)arg1 ;
-(id)setupView;
-(void)setDelegate:(id<SearchUIAccessoryViewDelegate>)arg1 ;
-(UIView *)view;
-(void)hide;
-(void)buttonPressed;
-(void)setRowModel:(SearchUIDetailedRowModel *)arg1 ;
-(void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(BOOL)shouldVerticallyCenter;
-(id)controlInView:(id)arg1 ;
@end

