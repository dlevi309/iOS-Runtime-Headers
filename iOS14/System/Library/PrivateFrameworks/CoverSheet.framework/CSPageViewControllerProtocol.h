/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)customListWidth;
-(double)dateTimeInsetX;
-(unsigned long long)listWidthStrategy;
-(double)listInsetX;
-(NSString *)pageRole;
-(double)minimumDateToListSpacing;
-(unsigned long long)listLayout;
-(unsigned long long)dateTimeLayout;

@required
+(BOOL)isAvailableForConfiguration;
+(unsigned long long)requiredCapabilities;
-(CSLayoutStrategy *)layoutStrategy;
-(id<CSCoverSheetViewControllerProtocol>)coverSheetViewController;
-(void)setLayoutStrategy:(id)arg1;
-(void)setCoverSheetViewController:(id)arg1;
-(BOOL)authenticated;
-(void)setTransitioning:(BOOL)arg1;
-(BOOL)isTransitioning;

@end

