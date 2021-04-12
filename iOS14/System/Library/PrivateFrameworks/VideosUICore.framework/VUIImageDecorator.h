/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


#import <VideosUICore/VideosUICore-Structs.h>
@class NSString;

@interface VUIImageDecorator : NSObject

@property (nonatomic,readonly) CGSize loaderScaleToSize; 
@property (nonatomic,readonly) BOOL loaderCropToFit; 
@property (nonatomic,readonly) CGSize expectedSize; 
@property (nonatomic,copy,readonly) NSString * decoratorIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)decoratorIdentifier;
-(CGSize)loaderScaleToSize;
-(CGSize)expectedSize;
-(BOOL)loaderCropToFit;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
@end

