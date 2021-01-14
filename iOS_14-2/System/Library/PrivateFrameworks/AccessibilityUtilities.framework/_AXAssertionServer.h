/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject {

	/*^block*/id _assertionWasAcquiredHandler;
	/*^block*/id _assertionWasReleasedHandler;
	NSMutableDictionary* _heldAssertionMap;

}

@property (nonatomic,retain) NSMutableDictionary * heldAssertionMap;              //@synthesize heldAssertionMap=_heldAssertionMap - In the implementation block
@property (nonatomic,copy) id assertionWasAcquiredHandler;                        //@synthesize assertionWasAcquiredHandler=_assertionWasAcquiredHandler - In the implementation block
@property (nonatomic,copy) id assertionWasReleasedHandler;                        //@synthesize assertionWasReleasedHandler=_assertionWasReleasedHandler - In the implementation block
-(id)init;
-(id)description;
-(void)setHeldAssertionMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)heldAssertionMap;
-(id)assertionWasAcquiredHandler;
-(id)assertionWasReleasedHandler;
-(void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2 ;
-(void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2 ;
-(id)clientsHoldingAssertionOfType:(id)arg1 ;
-(void)setAssertionWasAcquiredHandler:(id)arg1 ;
-(void)setAssertionWasReleasedHandler:(id)arg1 ;
@end

