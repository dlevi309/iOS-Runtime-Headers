/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/GKResourceDataConsumer.h>

@class NSString;

@interface GKImageDataConsumer : NSObject <GKResourceDataConsumer> {

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

