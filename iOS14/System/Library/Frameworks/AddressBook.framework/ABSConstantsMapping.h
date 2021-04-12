/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@class NSDictionary;

@interface ABSConstantsMapping : NSObject {

	NSDictionary* _mapping;
	id _defaultConstant;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,retain) id defaultConstant;                  //@synthesize defaultConstant=_defaultConstant - In the implementation block
+(id)CNToABPersonSocialProfileConstantsMapping;
+(id)ABToCNContainerTypeConstantsMapping;
+(id)ABToCNPersonAddressConstantsMapping;
+(id)ABToCNPersonInstantMessageConstantsMapping;
+(id)CNToABPersonSortOrderingConstantsMapping;
+(id)ABtoCNContactDisplayNameOrderConstantsMapping;
+(id)CNToABLabelConstantsMapping;
+(id)ABToCNPersonKindConstantsMapping;
+(id)CNToABPersonAddressConstantsMapping;
+(id)CNToABSourceTypeConstantsMapping;
+(id)ABToCNPersonSocialProfileConstantsMapping;
+(id)ABToCNContactSortOrderConstantsMapping;
+(id)CNToABCompositeNameFormatConstantsMapping;
+(id)ABToCNLabelConstantsMapping;
+(id)CNToABPersonKindConstantsMapping;
+(id)CNToABPersonInstantMessageConstantsMapping;
-(id)defaultConstant;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(void)setMapping:(NSDictionary *)arg1 ;
-(NSDictionary *)mapping;
-(void)setDefaultConstant:(id)arg1 ;
-(id)invertedMapping;
@end

