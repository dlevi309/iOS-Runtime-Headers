/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSString, NSURL;

@interface SXImageRequest : NSObject {

	BOOL _preserveColorspace;
	NSString* _imageIdentifier;
	NSURL* _URL;
	unsigned long long _qualities;
	/*^block*/id _loadingBlock;
	CGSize _size;

}

@property (nonatomic,readonly) NSString * imageIdentifier;                //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long qualities;              //@synthesize qualities=_qualities - In the implementation block
@property (nonatomic,copy) id loadingBlock;                               //@synthesize loadingBlock=_loadingBlock - In the implementation block
@property (nonatomic,readonly) BOOL preserveColorspace;                   //@synthesize preserveColorspace=_preserveColorspace - In the implementation block
-(CGSize)size;
-(NSString *)imageIdentifier;
-(NSURL *)URL;
-(unsigned long long)qualities;
-(id)initWithImageIdentifier:(id)arg1 imageQualities:(unsigned long long)arg2 url:(id)arg3 size:(CGSize)arg4 preserveColorspace:(BOOL)arg5 loadingBlock:(/*^block*/id)arg6 ;
-(id)loadingBlock;
-(void)setLoadingBlock:(id)arg1 ;
-(BOOL)preserveColorspace;
@end

