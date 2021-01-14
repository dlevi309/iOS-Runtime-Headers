/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString;

@interface AXAssertion : NSObject {

	NSString* _assertionType;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * assertionType;                      //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandleSynchronously; 
+(id)assertionWithType:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(NSString *)assertionType;
-(void)setAssertionType:(NSString *)arg1 ;
-(void)_notifyServerAssertionWasAcquired;
-(void)_notifyServerAssertionWasRelinquished;
-(BOOL)shouldHandleSynchronously;
-(BOOL)_hasValidAssertionType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
@end

