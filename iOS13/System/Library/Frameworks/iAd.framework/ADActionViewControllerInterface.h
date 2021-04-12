/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

@class ADAdSpace;


@protocol ADActionViewControllerInterface <NSObject>
@property (nonatomic,readonly) BOOL readyForPresentation; 
@property (nonatomic,__weak,readonly) ADAdSpace * adSpace; 
@required
-(void)dismiss;
-(ADAdSpace *)adSpace;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;

@end

