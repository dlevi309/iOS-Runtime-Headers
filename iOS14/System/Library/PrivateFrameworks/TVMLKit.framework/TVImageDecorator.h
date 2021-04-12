/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString;

@interface TVImageDecorator : NSObject

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

