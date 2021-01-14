/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableDescription.h>

@class NSDictionary, NSArray;

@interface INRootCodableDescription : INCodableDescription {

	NSDictionary* _referencedCodableDescriptionsByClassName;
	NSArray* _referencedCodableDescriptions;

}

@property (setter=_setReferencedCodableDescriptions:,nonatomic,retain) NSArray * referencedCodableDescriptions;              //@synthesize referencedCodableDescriptions=_referencedCodableDescriptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * _referencedCodableDescriptionsByClassName;                                     //@synthesize referencedCodableDescriptionsByClassName=_referencedCodableDescriptionsByClassName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setReferencedCodableDescriptions:(id)arg1 ;
-(NSDictionary *)_referencedCodableDescriptionsByClassName;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(NSArray *)referencedCodableDescriptions;
@end

