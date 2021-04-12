/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString, NSArray;


@protocol UINamedLayerStack <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
@optional
-(BOOL)flatImageContainsCornerRadius;
-(id)radiosityImage;
-(CGSize)radiosityImageScale;

@required
-(NSArray *)layers;
-(CGSize)size;
-(double)scale;
-(NSString *)name;
-(CGImageRef)flattenedImage;

@end

