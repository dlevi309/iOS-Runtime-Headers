/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString, SGPostalAddressComponents;

@interface SGPostalAddressExtraction : NSObject {

	NSString* _plainText;
	SGPostalAddressComponents* _components;

}

@property (nonatomic,readonly) NSString * plainText;                                //@synthesize plainText=_plainText - In the implementation block
@property (nonatomic,readonly) SGPostalAddressComponents * components;              //@synthesize components=_components - In the implementation block
-(SGPostalAddressComponents *)components;
-(NSString *)plainText;
-(id)initWithPlainText:(id)arg1 components:(id)arg2 ;
-(BOOL)hasExtraction;
@end

