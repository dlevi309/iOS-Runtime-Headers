/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@class NSDictionary;

@interface ABSConstantsMapping : NSObject {

	NSDictionary* _mapping;
	id _defaultConstant;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,retain) id defaultConstant;                  //@synthesize defaultConstant=_defaultConstant - In the implementation block
+(id)CNToABSourceTypeConstantsMapping;
+(id)ABToCNContainerTypeConstantsMapping;
+(id)ABtoCNContactDisplayNameOrderConstantsMapping;
+(id)CNToABCompositeNameFormatConstantsMapping;
+(id)ABToCNContactSortOrderConstantsMapping;
+(id)ABToCNLabelConstantsMapping;
+(id)CNToABLabelConstantsMapping;
+(id)ABToCNPersonInstantMessageConstantsMapping;
+(id)CNToABPersonInstantMessageConstantsMapping;
+(id)ABToCNPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSortOrderingConstantsMapping;
+(id)ABToCNPersonKindConstantsMapping;
+(id)ABToCNPersonAddressConstantsMapping;
+(id)CNToABPersonKindConstantsMapping;
+(id)CNToABPersonAddressConstantsMapping;
-(NSDictionary *)mapping;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(id)invertedMapping;
-(void)setMapping:(NSDictionary *)arg1 ;
-(void)setDefaultConstant:(id)arg1 ;
-(id)defaultConstant;
@end

