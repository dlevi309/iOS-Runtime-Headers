/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPresentationObservationToken.h>

@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken {

	SBControlCenterController* _controlCenterController;

}

@property (nonatomic,readonly) SBControlCenterController * controlCenterController;              //@synthesize controlCenterController=_controlCenterController - In the implementation block
-(long long)state;
-(void)dealloc;
-(id)initWithControlCenterController:(id)arg1 ;
-(SBControlCenterController *)controlCenterController;
@end

