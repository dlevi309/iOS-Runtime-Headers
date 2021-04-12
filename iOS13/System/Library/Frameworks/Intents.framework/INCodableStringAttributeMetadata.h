/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata {

	BOOL _multiline;
	BOOL _disableAutocorrect;
	BOOL _disableSmartDashes;
	BOOL _disableSmartQuotes;
	NSString* _defaultValue;
	NSString* _defaultValueID;
	long long _capitalization;

}

@property (assign,getter=isMultiline,nonatomic) BOOL multiline;                    //@synthesize multiline=_multiline - In the implementation block
@property (assign,nonatomic) BOOL disableAutocorrect;                              //@synthesize disableAutocorrect=_disableAutocorrect - In the implementation block
@property (assign,nonatomic) BOOL disableSmartDashes;                              //@synthesize disableSmartDashes=_disableSmartDashes - In the implementation block
@property (assign,nonatomic) BOOL disableSmartQuotes;                              //@synthesize disableSmartQuotes=_disableSmartQuotes - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * defaultValueID;                              //@synthesize defaultValueID=_defaultValueID - In the implementation block
@property (assign,nonatomic) long long capitalization;                             //@synthesize capitalization=_capitalization - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDefaultValue; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(BOOL)isMultiline;
-(void)setMultiline:(BOOL)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)localizedDefaultValue;
-(id)localizedDefaultValueWithLocalizer:(id)arg1 ;
-(BOOL)disableAutocorrect;
-(void)setDisableAutocorrect:(BOOL)arg1 ;
-(BOOL)disableSmartDashes;
-(void)setDisableSmartDashes:(BOOL)arg1 ;
-(BOOL)disableSmartQuotes;
-(void)setDisableSmartQuotes:(BOOL)arg1 ;
-(NSString *)defaultValueID;
-(void)setDefaultValueID:(NSString *)arg1 ;
-(long long)capitalization;
-(void)setCapitalization:(long long)arg1 ;
@end

