/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSNumber;

@interface PPQuickTypeQuery : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _type;
	unsigned char _subtype;
	unsigned char _semanticTag;
	unsigned char _time;
	unsigned char _options;
	unsigned _fields;
	NSArray* _subFields;
	NSString* _label;
	NSArray* _people;
	NSString* _localeIdentifier;
	NSString* _bundleIdentifier;
	NSArray* _recipients;
	NSNumber* _timeoutSeconds;

}

@property (assign,nonatomic) unsigned char type;                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned char subtype;                  //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned char semanticTag;              //@synthesize semanticTag=_semanticTag - In the implementation block
@property (assign,nonatomic) unsigned fields;                        //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic) unsigned char time;                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) unsigned char options;                  //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSArray * subFields;                    //@synthesize subFields=_subFields - In the implementation block
@property (nonatomic,copy) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * people;                       //@synthesize people=_people - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                   //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSNumber * timeoutSeconds;              //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_peopleNamesFromLMQualifiers:(id)arg1 ;
+(unsigned char)_typeFromString:(id)arg1 ;
+(unsigned)_fieldsFromStrings:(id)arg1 ;
+(id)_labelFromLMFieldString:(id)arg1 qualifiers:(id)arg2 ;
+(id)quickTypeQueryFromLMTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 ;
+(unsigned char)_semanticTagFromString:(id)arg1 ;
+(unsigned char)_timeFromString:(id)arg1 ;
+(id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned)arg4 time:(unsigned char)arg5 options:(unsigned char)arg6 subFields:(id)arg7 label:(id)arg8 people:(id)arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12 ;
+(unsigned char)_subtypeFromString:(id)arg1 ;
+(id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned)arg4 time:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11 ;
+(id)_subfieldsFromString:(id)arg1 ;
-(NSArray *)recipients;
-(NSString *)localeIdentifier;
-(unsigned char)subtype;
-(NSNumber *)timeoutSeconds;
-(unsigned char)time;
-(void)setFields:(unsigned)arg1 ;
-(void)setTime:(unsigned char)arg1 ;
-(unsigned)fields;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)subFields;
-(void)setPeople:(NSArray *)arg1 ;
-(BOOL)isEqualToQuickTypeQuery:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned char)options;
-(void)setType:(unsigned char)arg1 ;
-(void)setOptions:(unsigned char)arg1 ;
-(id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned)arg4 time:(unsigned char)arg5 options:(unsigned char)arg6 subFields:(id)arg7 label:(id)arg8 people:(id)arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12 timeoutSeconds:(id)arg13 ;
-(id)description;
-(NSArray *)people;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned char)type;
-(unsigned long long)hash;
-(void)setTimeoutSeconds:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)semanticTag;
-(void)setLabel:(NSString *)arg1 ;
-(void)setSubtype:(unsigned char)arg1 ;
-(void)setSubFields:(NSArray *)arg1 ;
-(void)setSemanticTag:(unsigned char)arg1 ;
-(BOOL)isResultEquivelentToQuickTypeQuery:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

