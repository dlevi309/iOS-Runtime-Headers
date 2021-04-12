/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString;

@interface SGStructuredEventClassification : NSObject {

	unsigned char _category;
	unsigned char _useCase;
	NSString* _locale;
	NSString* _providerName;

}

@property (nonatomic,readonly) unsigned char category;               //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned char useCase;                //@synthesize useCase=_useCase - In the implementation block
@property (nonatomic,readonly) NSString * locale;                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSString * providerName;              //@synthesize providerName=_providerName - In the implementation block
+(id)describeCategory:(unsigned char)arg1 ;
+(id)describeUseCase:(unsigned char)arg1 ;
+(id)categoryForSchema:(id)arg1 ;
-(NSString *)locale;
-(unsigned char)category;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned char)useCase;
-(unsigned char)isCancelled;
-(NSString *)providerName;
-(unsigned char)categoryForCategoryString:(id)arg1 ;
-(unsigned char)useCaseForUseCaseString:(id)arg1 ;
-(unsigned char)isCandidateForExtraction;
@end

