/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(id)initWithPayloadImage:(id)arg1 ;
-(id)initWithIntentsImage:(id)arg1 ;
-(id)payloadImage;
-(INImage *)intentsImage;
-(void)setIntentsImage:(INImage *)arg1 ;
@end

