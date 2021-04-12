/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

@class NSArray, CPBarButton;


@protocol CPBarButtonProviding <NSObject>
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
@required
-(CPBarButton *)backButton;
-(void)setBackButton:(id)arg1;
-(NSArray *)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1;
-(NSArray *)trailingNavigationBarButtons;
-(void)setTrailingNavigationBarButtons:(id)arg1;

@end

