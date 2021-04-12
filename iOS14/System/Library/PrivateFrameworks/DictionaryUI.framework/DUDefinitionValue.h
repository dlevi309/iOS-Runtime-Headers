/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
*/


#import <DictionaryUI/DictionaryUI-Structs.h>
@class NSAttributedString, NSString, NSDictionary, MAAsset;

@interface DUDefinitionValue : NSObject {

	NSAttributedString* _definition;
	NSString* _longDefinition;
	NSDictionary* _definitionElements;
	NSString* _localizedDictionaryName;
	NSString* _term;
	MAAsset* _rawAsset;
	CFArrayRef _foundRecordRefs;

}

@property (assign) CFArrayRef foundRecordRefs;                        //@synthesize foundRecordRefs=_foundRecordRefs - In the implementation block
@property (readonly) NSString * localizedDictionaryName;              //@synthesize localizedDictionaryName=_localizedDictionaryName - In the implementation block
@property (readonly) NSString * term;                                 //@synthesize term=_term - In the implementation block
@property (readonly) NSAttributedString * definition;                 //@synthesize definition=_definition - In the implementation block
@property (readonly) NSString * longDefinition;                       //@synthesize longDefinition=_longDefinition - In the implementation block
@property (readonly) NSDictionary * definitionElements;               //@synthesize definitionElements=_definitionElements - In the implementation block
@property (nonatomic,retain) MAAsset * rawAsset;                      //@synthesize rawAsset=_rawAsset - In the implementation block
-(NSString *)term;
-(MAAsset *)rawAsset;
-(id)description;
-(NSAttributedString *)definition;
-(NSString *)localizedDictionaryName;
-(NSString *)longDefinition;
-(void)setRawAsset:(MAAsset *)arg1 ;
-(void)dealloc;
-(id)_HTMLDefinitionForType:(long long)arg1 ;
-(id)initWithDefinitionDictionary:(id)arg1 term:(id)arg2 ;
-(NSDictionary *)definitionElements;
-(CFArrayRef)foundRecordRefs;
-(void)setFoundRecordRefs:(CFArrayRef)arg1 ;
@end

