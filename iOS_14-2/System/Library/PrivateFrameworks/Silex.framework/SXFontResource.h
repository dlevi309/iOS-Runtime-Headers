/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXFontResource.h>

@protocol SXFontResource <SXResource,SXFontFace>
@end


@class NSString, NSURL;

@interface SXFontResource : SXResource <SXFontResource>

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes; 
-(id<SXFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(id)fontAttributesWithValue:(id)arg1 withType:(int)arg2 ;
@end

