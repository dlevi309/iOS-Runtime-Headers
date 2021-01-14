/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewElement.h>

@class NSURL, NSDictionary;

@interface TVImageElement : TVViewElement

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * srcset; 
@property (nonatomic,readonly) long long imageType; 
-(NSDictionary *)srcset;
-(NSURL *)URL;
-(long long)imageType;
-(CGSize)imageScaleToSize;
@end

