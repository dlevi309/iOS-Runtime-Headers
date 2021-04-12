/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


@interface AXPIFingerEventSender : NSObject {

	BOOL _shouldAddRealEventFlag;

}

@property (assign,nonatomic) BOOL shouldAddRealEventFlag;              //@synthesize shouldAddRealEventFlag=_shouldAddRealEventFlag - In the implementation block
-(void)performCancel;
-(id)_assignFingerIdentifiersToTouches:(id)arg1 ;
-(void)performDownWithTouchesByFingerIdentifier:(id)arg1 ;
-(void)_sendHandEvent:(unsigned)arg1 touchesByFingerIdentifier:(id)arg2 ;
-(void)performMoveWithTouchesByFingerIdentifier:(id)arg1 ;
-(void)performUpWithTouchesByFingerIdentifier:(id)arg1 ;
-(BOOL)shouldAddRealEventFlag;
-(void)performDownWithTouches:(id)arg1 ;
-(void)performMoveWithTouches:(id)arg1 ;
-(void)performUpWithTouches:(id)arg1 ;
-(void)setShouldAddRealEventFlag:(BOOL)arg1 ;
@end

