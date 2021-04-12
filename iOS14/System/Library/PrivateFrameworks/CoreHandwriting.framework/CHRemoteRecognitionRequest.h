/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSCharacterSet, NSDictionary, CHDrawing;

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding> {

	BOOL _shouldUseTextReplacements;
	BOOL _enableCachingIfAvailable;
	BOOL _enableGen2ModelIfAvailable;
	BOOL _enableGen2CharacterLMIfAvailable;
	BOOL _hasBeenSubmitted;
	int _recognitionMode;
	int _contentType;
	int _autoCapitalizationMode;
	NSLocale* _locale;
	NSCharacterSet* _activeCharacterSet;
	unsigned long long _maxRecognitionResultCount;
	NSDictionary* _options;
	CHDrawing* _drawing;
	long long _priority;
	CGSize _minimumDrawingSize;

}

@property (nonatomic,copy) NSLocale * locale;                                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) int recognitionMode;                                       //@synthesize recognitionMode=_recognitionMode - In the implementation block
@property (assign,nonatomic) CGSize minimumDrawingSize;                                 //@synthesize minimumDrawingSize=_minimumDrawingSize - In the implementation block
@property (assign,nonatomic) int contentType;                                           //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) int autoCapitalizationMode;                                //@synthesize autoCapitalizationMode=_autoCapitalizationMode - In the implementation block
@property (nonatomic,copy) NSCharacterSet * activeCharacterSet;                         //@synthesize activeCharacterSet=_activeCharacterSet - In the implementation block
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount;              //@synthesize maxRecognitionResultCount=_maxRecognitionResultCount - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) CHDrawing * drawing;                                         //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTextReplacements;                            //@synthesize shouldUseTextReplacements=_shouldUseTextReplacements - In the implementation block
@property (assign,nonatomic) BOOL enableCachingIfAvailable;                             //@synthesize enableCachingIfAvailable=_enableCachingIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableGen2ModelIfAvailable;                           //@synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableGen2CharacterLMIfAvailable;                     //@synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasBeenSubmitted;                                     //@synthesize hasBeenSubmitted=_hasBeenSubmitted - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(int)contentType;
-(void)setHasBeenSubmitted:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)description;
-(BOOL)hasBeenSubmitted;
-(CHDrawing *)drawing;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentType:(int)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setDrawing:(CHDrawing *)arg1 ;
-(void)setAutoCapitalizationMode:(int)arg1 ;
-(void)setActiveCharacterSet:(NSCharacterSet *)arg1 ;
-(void)setMinimumDrawingSize:(CGSize)arg1 ;
-(int)autoCapitalizationMode;
-(BOOL)enableCachingIfAvailable;
-(void)setEnableCachingIfAvailable:(BOOL)arg1 ;
-(BOOL)enableGen2ModelIfAvailable;
-(void)setEnableGen2ModelIfAvailable:(BOOL)arg1 ;
-(BOOL)enableGen2CharacterLMIfAvailable;
-(void)setEnableGen2CharacterLMIfAvailable:(BOOL)arg1 ;
-(int)recognitionMode;
-(unsigned long long)maxRecognitionResultCount;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1 ;
-(NSCharacterSet *)activeCharacterSet;
-(CGSize)minimumDrawingSize;
-(void)setRecognitionMode:(int)arg1 ;
-(id)initWithLocale:(id)arg1 recognitionMode:(int)arg2 drawing:(id)arg3 options:(id)arg4 priority:(long long)arg5 ;
-(void)setShouldUseTextReplacements:(BOOL)arg1 ;
-(BOOL)shouldUseTextReplacements;
-(BOOL)isEqualToRemoteRecognitionRequest:(id)arg1 ;
-(id)recognizerConfigurationKey;
@end

