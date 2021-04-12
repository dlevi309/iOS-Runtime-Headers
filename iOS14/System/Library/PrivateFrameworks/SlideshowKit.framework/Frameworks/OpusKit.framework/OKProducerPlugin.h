/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {

	Class _producerClass;
	long long _loadCounter;
	NSArray* _loadedClasses;
	OKProducerContent* _content;

}

@property (nonatomic,retain) OKProducerContent * content;              //@synthesize content=_content - In the implementation block
-(id)localizedName;
-(OKProducerContent *)content;
-(id)init;
-(void)setContent:(OKProducerContent *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)contentIdentifier;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)audioURLs;
-(id)backgroundColor;
-(unsigned long long)family;
-(void)_unload;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(BOOL)isLoaded;
-(BOOL)_load;
-(void)dealloc;
-(id)supportedResolutions;
-(void)setupJavascriptContext:(id)arg1 ;
-(id)exportedClassNames;
-(BOOL)hasLoadedClass:(Class)arg1 ;
-(double)minimumContentVersion;
-(id)producerWithPresentation:(id)arg1 ;
-(BOOL)loadRetain;
-(void)unloadRelease;
-(void)_bundleDidLoad:(id)arg1 ;
-(BOOL)hasExportedClass:(Class)arg1 ;
@end

