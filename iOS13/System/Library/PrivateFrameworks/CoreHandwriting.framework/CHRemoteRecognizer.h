/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/CHRecognizing.h>

@class NSLocale, NSCharacterSet, NSXPCConnection, NSString;

@interface CHRemoteRecognizer : NSObject <CHRecognizing> {

	BOOL _shouldEnableCachingIfAvailable;
	BOOL _shouldUseTextReplacements;
	int _recognitionMode;
	int _contentType;
	NSLocale* _locale;
	NSCharacterSet* _activeCharacterSet;
	unsigned long long _maxRecognitionResultCount;
	long long _priority;
	NSXPCConnection* __connection;
	CGSize _minimumDrawingSize;

}

@property (nonatomic,readonly) NSXPCConnection * _connection;                           //@synthesize _connection=__connection - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTextReplacements;                            //@synthesize shouldUseTextReplacements=_shouldUseTextReplacements - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int recognitionMode;                                     //@synthesize recognitionMode=_recognitionMode - In the implementation block
@property (assign,nonatomic) int contentType;                                           //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                                  //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount;              //@synthesize maxRecognitionResultCount=_maxRecognitionResultCount - In the implementation block
@property (nonatomic,retain) NSCharacterSet * activeCharacterSet;                       //@synthesize activeCharacterSet=_activeCharacterSet - In the implementation block
@property (assign,nonatomic) CGSize minimumDrawingSize;                                 //@synthesize minimumDrawingSize=_minimumDrawingSize - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableCachingIfAvailable;                       //@synthesize shouldEnableCachingIfAvailable=_shouldEnableCachingIfAvailable - In the implementation block
+(long long)maxRequestStrokeCountForLocale:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSXPCConnection *)_connection;
-(NSLocale *)locale;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setActiveCharacterSet:(NSCharacterSet *)arg1 ;
-(BOOL)shouldEnableCachingIfAvailable;
-(id)initWithMode:(int)arg1 locale:(id)arg2 ;
-(int)recognitionMode;
-(unsigned long long)maxRecognitionResultCount;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1 ;
-(NSCharacterSet *)activeCharacterSet;
-(CGSize)minimumDrawingSize;
-(void)setMinimumDrawingSize:(CGSize)arg1 ;
-(void)setShouldEnableCachingIfAvailable:(BOOL)arg1 ;
-(void)setShouldUseTextReplacements:(BOOL)arg1 ;
-(BOOL)shouldUseTextReplacements;
-(id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)transcriptionPathsForTokenizedTextResult:(id)arg1 withHistory:(id)arg2 scores:(id*)arg3 error:(id*)arg4 ;
-(void)_teardownXPCConnection;
-(id)_recognitionRequestWithDrawing:(id)arg1 options:(id)arg2 ;
-(id)_recognitionResultForRequest:(id)arg1 error:(id*)arg2 ;
-(void)_setupXPCConnectionIfNeeded;
-(BOOL)isEqualToRemoteRecognizer:(id)arg1 ;
@end

