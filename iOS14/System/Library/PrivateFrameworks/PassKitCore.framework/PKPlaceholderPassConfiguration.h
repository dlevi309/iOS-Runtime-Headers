/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAppletSubcredential, PKPassAutomaticSelectionCriterion, NSArray;

@interface PKPlaceholderPassConfiguration : NSObject <NSSecureCoding> {

	PKAppletSubcredential* _subcredential;
	PKPassAutomaticSelectionCriterion* _automaticSelectionCriterion;
	long long _paymentApplicationState;
	NSArray* _associatedApplicationIdentifiers;
	NSArray* _passFields;

}

@property (nonatomic,readonly) PKAppletSubcredential * subcredential;                                        //@synthesize subcredential=_subcredential - In the implementation block
@property (nonatomic,readonly) PKPassAutomaticSelectionCriterion * automaticSelectionCriterion;              //@synthesize automaticSelectionCriterion=_automaticSelectionCriterion - In the implementation block
@property (nonatomic,readonly) long long paymentApplicationState;                                            //@synthesize paymentApplicationState=_paymentApplicationState - In the implementation block
@property (nonatomic,copy) NSArray * associatedApplicationIdentifiers;                                       //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * passFields;                                                             //@synthesize passFields=_passFields - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(PKAppletSubcredential *)subcredential;
-(PKPassAutomaticSelectionCriterion *)automaticSelectionCriterion;
-(long long)paymentApplicationState;
-(void)setPassFields:(NSArray *)arg1 ;
-(void)setAssociatedApplicationIdentifiers:(NSArray *)arg1 ;
-(id)initWithSubcredential:(id)arg1 automaticSelectionCriterion:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)associatedApplicationIdentifiers;
-(NSArray *)passFields;
@end

