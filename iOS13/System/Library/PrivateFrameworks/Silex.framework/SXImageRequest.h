/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)URL;
-(unsigned long long)qualities;
-(BOOL)preserveColorspace;
-(id)loadingBlock;
-(NSString *)imageIdentifier;
-(id)initWithImageIdentifier:(id)arg1 imageQualities:(unsigned long long)arg2 url:(id)arg3 size:(CGSize)arg4 preserveColorspace:(BOOL)arg5 loadingBlock:(/*^block*/id)arg6 ;
-(void)setLoadingBlock:(id)arg1 ;
@end

