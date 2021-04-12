/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

@class NSLocale, NSCharacterSet;


@protocol CHRecognizing <NSObject>
@property (nonatomic,readonly) int recognitionMode; 
@property (assign,nonatomic) int contentType; 
@property (assign,nonatomic) int autoCapitalizationMode; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount; 
@property (nonatomic,retain) NSCharacterSet * activeCharacterSet; 
@property (assign,nonatomic) CGSize minimumDrawingSize; 
@property (nonatomic,readonly) BOOL enableCachingIfAvailable; 
@property (nonatomic,readonly) BOOL enableGen2ModelIfAvailable; 
@property (nonatomic,readonly) BOOL enableGen2CharacterLMIfAvailable; 
@required
-(NSLocale *)locale;
-(int)contentType;
-(void)setContentType:(int)arg1;
-(void)setAutoCapitalizationMode:(int)arg1;
-(id)initWithMode:(int)arg1 locale:(id)arg2;
-(void)setActiveCharacterSet:(id)arg1;
-(void)setMinimumDrawingSize:(CGSize)arg1;
-(int)autoCapitalizationMode;
-(BOOL)enableCachingIfAvailable;
-(BOOL)enableGen2ModelIfAvailable;
-(BOOL)enableGen2CharacterLMIfAvailable;
-(int)recognitionMode;
-(unsigned long long)maxRecognitionResultCount;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1;
-(NSCharacterSet *)activeCharacterSet;
-(CGSize)minimumDrawingSize;

@end

