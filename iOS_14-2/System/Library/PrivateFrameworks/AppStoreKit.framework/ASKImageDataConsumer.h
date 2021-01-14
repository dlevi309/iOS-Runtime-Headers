/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/ASKResourceDataConsumer.h>

@class NSString;

@interface ASKImageDataConsumer : NSObject <ASKResourceDataConsumer> {

	BOOL _isLayeredImage;
	double _scale;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL isLayeredImage;                 //@synthesize isLayeredImage=_isLayeredImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLayeredImage;
-(CGSize)size;
-(id)objectForData:(id)arg1 error:(id*)arg2 ;
-(double)scale;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 isLayeredImage:(BOOL)arg3 ;
@end

