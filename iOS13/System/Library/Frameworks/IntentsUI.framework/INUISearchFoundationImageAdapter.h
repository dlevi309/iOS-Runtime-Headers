/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <SearchFoundation/SFImage.h>

@class NSValue, INImage;

@interface INUISearchFoundationImageAdapter : SFImage {

	NSValue* _sizeValue;
	INImage* _intentsImage;

}

@property (nonatomic,copy) INImage * intentsImage;              //@synthesize intentsImage=_intentsImage - In the implementation block
+(void)initialize;
+(id)_sharedImageLoader;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(int)source;
-(void)setSize:(CGSize)arg1 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPayloadImage:(id)arg1 ;
-(id)initWithIntentsImage:(id)arg1 ;
-(id)payloadImage;
-(INImage *)intentsImage;
-(void)setIntentsImage:(INImage *)arg1 ;
@end

