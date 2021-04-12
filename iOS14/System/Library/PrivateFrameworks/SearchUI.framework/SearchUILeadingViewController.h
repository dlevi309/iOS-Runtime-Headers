/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIDetailedRowComponent.h>

@protocol SearchUIFeedbackDelegate;
@class UIView, SearchUIDetailedRowModel, NSString;

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent> {

	BOOL _usesCompactWidth;
	SearchUIDetailedRowModel* rowModel;
	id<SearchUIFeedbackDelegate> feedbackDelegate;
	UIView* _view;

}

@property (readonly) unsigned long long type; 
@property (nonatomic,retain) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL usesCompactWidth;                                             //@synthesize usesCompactWidth=_usesCompactWidth - In the implementation block
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
+(Class)leadingViewClassForRowModel:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)init;
-(id)imageView;
-(void)updateWithContacts:(id)arg1 ;
-(BOOL)usesCompactWidth;
-(SearchUIDetailedRowModel *)rowModel;
-(void)setView:(UIView *)arg1 ;
-(id)setupView;
-(UIView *)view;
-(void)hide;
-(void)setRowModel:(SearchUIDetailedRowModel *)arg1 ;
-(unsigned long long)type;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)forceVerticalCenteringOfContents;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(BOOL)shouldVerticallyCenter;
-(void)setUsesCompactWidth:(BOOL)arg1 ;
@end

