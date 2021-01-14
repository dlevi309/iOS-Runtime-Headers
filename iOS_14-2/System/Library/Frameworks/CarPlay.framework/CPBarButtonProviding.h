/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

@class NSArray, CPBarButton;


@protocol CPBarButtonProviding <NSObject>
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
@required
-(void)setBackButton:(id)arg1;
-(void)setTrailingNavigationBarButtons:(id)arg1;
-(CPBarButton *)backButton;
-(NSArray *)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1;
-(NSArray *)trailingNavigationBarButtons;

@end

