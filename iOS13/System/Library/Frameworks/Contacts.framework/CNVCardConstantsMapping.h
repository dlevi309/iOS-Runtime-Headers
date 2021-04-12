/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject {

	NSDictionary* _mapping;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
+(id)vCardToCNSocialProfileConstantsMapping;
+(id)vCardToCNInstantMessageConstantsMapping;
+(id)CNToVCardSocialProfileConstantsMapping;
+(id)CNToVCardInstantMessageConstantsMapping;
-(NSDictionary *)mapping;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(id)invertedMapping;
-(void)setMapping:(NSDictionary *)arg1 ;
@end

