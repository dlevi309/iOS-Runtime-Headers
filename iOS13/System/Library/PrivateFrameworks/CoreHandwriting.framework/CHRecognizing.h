/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

@class NSLocale, NSCharacterSet;


@protocol CHRecognizing <NSObject>
@property (nonatomic,readonly) int recognitionMode; 
@property (assign,nonatomic) int contentType; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount; 
@property (nonatomic,retain) NSCharacterSet * activeCharacterSet; 
@property (assign,nonatomic) CGSize minimumDrawingSize; 
@property (assign,nonatomic) BOOL shouldEnableCachingIfAvailable; 
@required
-(NSLocale *)locale;
-(int)contentType;
-(void)setContentType:(int)arg1;
-(void)setActiveCharacterSet:(id)arg1;
-(BOOL)shouldEnableCachingIfAvailable;
-(id)initWithMode:(int)arg1 locale:(id)arg2;
-(int)recognitionMode;
-(unsigned long long)maxRecognitionResultCount;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1;
-(NSCharacterSet *)activeCharacterSet;
-(CGSize)minimumDrawingSize;
-(void)setMinimumDrawingSize:(CGSize)arg1;
-(void)setShouldEnableCachingIfAvailable:(BOOL)arg1;

@end

