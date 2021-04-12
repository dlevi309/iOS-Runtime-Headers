/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)expectedSize;
-(NSString *)decoratorIdentifier;
-(CGSize)loaderScaleToSize;
-(BOOL)loaderCropToFit;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
@end

