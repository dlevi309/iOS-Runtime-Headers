/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <libobjc.A.dylib/CAMLWriterDelegate.h>

@class NSString, NSDictionary;

@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate> {

	NSString* _resourceDir;
	int _serial;
	NSString* _imageFormat;
	NSDictionary* _imageEncodeOptions;
	BOOL _skipHiddenLayers;

}

@property (copy) NSString * imageFormat;                            //@synthesize imageFormat=_imageFormat - In the implementation block
@property (copy) NSDictionary * imageEncodeOptions;                 //@synthesize imageEncodeOptions=_imageEncodeOptions - In the implementation block
@property (assign) BOOL skipHiddenLayers;                           //@synthesize skipHiddenLayers=_skipHiddenLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)CAMLWriter:(id)arg1 typeForObject:(id)arg2 ;
-(id)CAMLWriter:(id)arg1 URLForResource:(id)arg2 ;
-(BOOL)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2 ;
-(id)initWithResourceDir:(id)arg1 ;
-(NSString *)imageFormat;
-(void)setImageFormat:(NSString *)arg1 ;
-(NSDictionary *)imageEncodeOptions;
-(void)setImageEncodeOptions:(NSDictionary *)arg1 ;
-(BOOL)skipHiddenLayers;
-(void)setSkipHiddenLayers:(BOOL)arg1 ;
@end

