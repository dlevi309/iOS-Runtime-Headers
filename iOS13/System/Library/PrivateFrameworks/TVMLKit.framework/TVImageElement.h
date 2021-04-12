/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewElement.h>

@class NSURL, NSDictionary;

@interface TVImageElement : TVViewElement

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * srcset; 
@property (nonatomic,readonly) long long imageType; 
-(NSURL *)URL;
-(long long)imageType;
-(NSDictionary *)srcset;
-(CGSize)imageScaleToSize;
@end

