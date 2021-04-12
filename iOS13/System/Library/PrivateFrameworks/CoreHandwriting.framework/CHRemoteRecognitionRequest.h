/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSCharacterSet, NSDictionary, CHDrawing;

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding> {

	BOOL _shouldUseTextReplacements;
	BOOL _shouldEnableCachingIfAvailable;
	BOOL _hasBeenSubmitted;
	int _recognitionMode;
	int _contentType;
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
@property (nonatomic,copy) NSCharacterSet * activeCharacterSet;                         //@synthesize activeCharacterSet=_activeCharacterSet - In the implementation block
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount;              //@synthesize maxRecognitionResultCount=_maxRecognitionResultCount - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) CHDrawing * drawing;                                         //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTextReplacements;                            //@synthesize shouldUseTextReplacements=_shouldUseTextReplacements - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableCachingIfAvailable;                       //@synthesize shouldEnableCachingIfAvailable=_shouldEnableCachingIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasBeenSubmitted;                                     //@synthesize hasBeenSubmitted=_hasBeenSubmitted - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)hasBeenSubmitted;
-(void)setHasBeenSubmitted:(BOOL)arg1 ;
-(CHDrawing *)drawing;
-(void)setActiveCharacterSet:(NSCharacterSet *)arg1 ;
-(void)setDrawing:(CHDrawing *)arg1 ;
-(BOOL)shouldEnableCachingIfAvailable;
-(int)recognitionMode;
-(unsigned long long)maxRecognitionResultCount;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1 ;
-(NSCharacterSet *)activeCharacterSet;
-(CGSize)minimumDrawingSize;
-(void)setMinimumDrawingSize:(CGSize)arg1 ;
-(void)setShouldEnableCachingIfAvailable:(BOOL)arg1 ;
-(void)setRecognitionMode:(int)arg1 ;
-(id)initWithLocale:(id)arg1 recognitionMode:(int)arg2 drawing:(id)arg3 options:(id)arg4 priority:(long long)arg5 ;
-(void)setShouldUseTextReplacements:(BOOL)arg1 ;
-(BOOL)shouldUseTextReplacements;
-(BOOL)isEqualToRemoteRecognitionRequest:(id)arg1 ;
-(id)recognizerConfigurationKey;
@end

