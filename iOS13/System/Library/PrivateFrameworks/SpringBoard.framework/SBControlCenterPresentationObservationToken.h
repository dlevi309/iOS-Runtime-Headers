/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPresentationObservationToken.h>

@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken {

	SBControlCenterController* _controlCenterController;

}

@property (nonatomic,readonly) SBControlCenterController * controlCenterController;              //@synthesize controlCenterController=_controlCenterController - In the implementation block
-(void)dealloc;
-(long long)state;
-(id)initWithControlCenterController:(id)arg1 ;
-(SBControlCenterController *)controlCenterController;
@end

