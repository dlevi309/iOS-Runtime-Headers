/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@protocol UINamedLayerImage;
@class NSString, UIImage, NSObject;

@interface VUINamedLayerImage : NSObject <UINamedLayerImage> {

	int _blendMode;
	UIImage* _decodedImage;
	NSObject*<UINamedLayerImage> _namedLayerImage;

}

@property (nonatomic,retain) NSObject*<UINamedLayerImage> namedLayerImage;                   //@synthesize namedLayerImage=_namedLayerImage - In the implementation block
@property (assign,nonatomic) int blendMode;                                                  //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) UIImage * decodedImage;                                         //@synthesize decodedImage=_decodedImage - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)namedLayerImageFromNamedLayerImage:(id)arg1 ;
+(id)decodedNamedLayerImageFromNamedLayerImage:(id)arg1 ;
-(int)blendMode;
-(BOOL)fixedFrame;
-(id)init;
-(double)opacity;
-(CGRect)frame;
-(id)imageObj;
-(NSString *)name;
-(id)_init;
-(void)setBlendMode:(int)arg1 ;
-(void)setNamedLayerImage:(NSObject*<UINamedLayerImage>)arg1 ;
-(void)setDecodedImage:(UIImage *)arg1 ;
-(NSObject*<UINamedLayerImage>)namedLayerImage;
-(UIImage *)decodedImage;
@end

