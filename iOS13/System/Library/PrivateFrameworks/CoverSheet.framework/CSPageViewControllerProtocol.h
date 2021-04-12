/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class CSLayoutStrategy, NSString;


@protocol CSPageViewControllerProtocol <CSCoverSheetViewPresenting>
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy; 
@property (nonatomic,copy,readonly) NSString * pageRole; 
@optional
-(unsigned long long)listLayout;
-(unsigned long long)listWidthStrategy;
-(double)listInsetX;
-(double)customListWidth;
-(unsigned long long)dateTimeLayout;
-(double)dateTimeInsetX;
-(double)minimumDateToListSpacing;
-(NSString *)pageRole;

@required
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(BOOL)authenticated;
-(void)setTransitioning:(BOOL)arg1;
-(BOOL)isTransitioning;
-(id<CSCoverSheetViewControllerProtocol>)coverSheetViewController;
-(void)setCoverSheetViewController:(id)arg1;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(id)arg1;

@end

