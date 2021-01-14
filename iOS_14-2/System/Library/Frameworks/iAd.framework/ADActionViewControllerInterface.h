/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

@class ADAdSpace;


@protocol ADActionViewControllerInterface <NSObject>
@property (nonatomic,readonly) BOOL readyForPresentation; 
@property (nonatomic,__weak,readonly) ADAdSpace * adSpace; 
@required
-(ADAdSpace *)adSpace;
-(void)dismiss;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;

@end

