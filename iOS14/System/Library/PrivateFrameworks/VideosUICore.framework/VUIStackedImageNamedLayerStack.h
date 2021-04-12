/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKit/UINamedLayerStack.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface VUIStackedImageNamedLayerStack : NSObject <UINamedLayerStack, NSCopying> {

	CGImageRef _flattenedImage;
	BOOL _flatImageContainsCornerRadius;
	NSString* _name;
	NSArray* _layers;
	double _scale;
	id _radiosityImage;
	CGSize _size;
	CGSize _radiosityImageScale;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * layers;                                //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGImageRef flattenedImage; 
@property (nonatomic,retain) id radiosityImage;                               //@synthesize radiosityImage=_radiosityImage - In the implementation block
@property (assign,nonatomic) CGSize radiosityImageScale;                      //@synthesize radiosityImageScale=_radiosityImageScale - In the implementation block
@property (assign,nonatomic) BOOL flatImageContainsCornerRadius;              //@synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)flatImageContainsCornerRadius;
-(NSArray *)layers;
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(CGSize)size;
-(double)scale;
-(void)setLayers:(NSArray *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)name;
-(void)setScale:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGImageRef)flattenedImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setFlatImageContainsCornerRadius:(BOOL)arg1 ;
-(void)setFlattenedImage:(CGImageRef)arg1 ;
-(void)setRadiosityImage:(id)arg1 ;
-(void)setRadiosityImageScale:(CGSize)arg1 ;
@end

