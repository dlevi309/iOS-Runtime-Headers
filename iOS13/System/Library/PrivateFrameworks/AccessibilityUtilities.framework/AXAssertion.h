/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString;

@interface AXAssertion : NSObject {

	NSString* _assertionType;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * assertionType;              //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(void)setAssertionType:(NSString *)arg1 ;
-(void)_notifyServerAssertionWasAcquired;
-(void)_notifyServerAssertionWasRelinquished;
-(NSString *)assertionType;
-(BOOL)_hasValidAssertionType;
@end

