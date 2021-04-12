/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)size;
-(double)scale;
-(id)objectForData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLayeredImage;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 isLayeredImage:(BOOL)arg3 ;
@end

