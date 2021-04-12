/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

@class NSString, CADisplay, BKSDisplayProgressIndicatorProperties;


@protocol BKSDisplayRenderOverlayDescribing <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) CADisplay * display; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) BOOL lockBacklight; 
@property (nonatomic,readonly) BKSDisplayProgressIndicatorProperties * progressIndicatorProperties; 
@property (getter=isInterstitial,nonatomic,readonly) BOOL interstitial; 
@required
-(NSString *)name;
-(long long)interfaceOrientation;
-(CADisplay *)display;
-(BOOL)lockBacklight;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(BOOL)isInterstitial;

@end

