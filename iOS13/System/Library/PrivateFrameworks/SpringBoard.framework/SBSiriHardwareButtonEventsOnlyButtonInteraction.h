/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>

@class SBSiriHardwareButtonInteraction, NSString;

@interface SBSiriHardwareButtonEventsOnlyButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction> {

	long long _siriButtonIdentifier;
	SBSiriHardwareButtonInteraction* _parentSiriInteraction;

}

@property (assign,nonatomic) long long siriButtonIdentifier;                                              //@synthesize siriButtonIdentifier=_siriButtonIdentifier - In the implementation block
@property (assign,nonatomic,__weak) SBSiriHardwareButtonInteraction * parentSiriInteraction;              //@synthesize parentSiriInteraction=_parentSiriInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hardwareButtonInteractionForHomeButtonForwardingToInteraction:(id)arg1 ;
-(long long)siriButtonIdentifier;
-(BOOL)consumeSinglePressUp;
-(void)setSiriButtonIdentifier:(long long)arg1 ;
-(void)setParentSiriInteraction:(SBSiriHardwareButtonInteraction *)arg1 ;
-(SBSiriHardwareButtonInteraction *)parentSiriInteraction;
@end

