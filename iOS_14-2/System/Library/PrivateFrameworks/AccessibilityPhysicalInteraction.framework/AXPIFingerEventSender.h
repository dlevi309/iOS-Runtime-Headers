/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


@interface AXPIFingerEventSender : NSObject {

	BOOL _shouldAddRealEventFlag;
	unsigned long long _senderID;

}

@property (assign,nonatomic) BOOL shouldAddRealEventFlag;              //@synthesize shouldAddRealEventFlag=_shouldAddRealEventFlag - In the implementation block
@property (assign,nonatomic) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
-(unsigned long long)senderID;
-(void)setSenderID:(unsigned long long)arg1 ;
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

