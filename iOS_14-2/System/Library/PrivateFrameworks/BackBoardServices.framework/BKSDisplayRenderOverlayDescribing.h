/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)lockBacklight;
-(NSString *)name;
-(long long)interfaceOrientation;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(CADisplay *)display;
-(BOOL)isInterstitial;

@end

