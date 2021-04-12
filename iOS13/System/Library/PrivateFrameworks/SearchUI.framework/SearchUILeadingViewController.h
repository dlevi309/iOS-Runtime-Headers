/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIDetailedRowComponent.h>

@protocol SearchUIFeedbackDelegate;
@class UIView, SearchUIDetailedRowModel, NSString;

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent> {

	SearchUIDetailedRowModel* rowModel;
	id<SearchUIFeedbackDelegate> feedbackDelegate;
	UIView* _view;

}

@property (readonly) unsigned long long type; 
@property (nonatomic,retain) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
+(BOOL)supportsRowModel:(id)arg1 ;
+(Class)leadingViewClassForRowModel:(id)arg1 ;
-(id)init;
-(unsigned long long)type;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)imageView;
-(void)hide;
-(void)updateWithContacts:(id)arg1 ;
-(id)setupView;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(SearchUIDetailedRowModel *)rowModel;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(void)setRowModel:(SearchUIDetailedRowModel *)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)forceVerticalCenteringOfContents;
@end

