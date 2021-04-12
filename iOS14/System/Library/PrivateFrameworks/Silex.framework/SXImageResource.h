/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXImageResource.h>
@class NSString;


@protocol SXImageResource <SXResource>
@property (nonatomic,readonly) CGSize dimensions; 
@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) BOOL wideColorSpace; 
@required
-(CGSize)dimensions;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(NSString *)imageIdentifier;
-(double)heightForImageWidth:(double)arg1;
-(BOOL)wideColorSpace;
-(double)widthForImageHeight:(double)arg1;
-(CGSize*)sizeThatFills:(CGSize)arg1;

@end


@class NSString, NSURL;

@interface SXImageResource : SXResource <SXImageResource>

@property (nonatomic,readonly) CGSize dimensions; 
@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) BOOL wideColorSpace; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)imageIdentifier;
-(CGSize)dimensions;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)heightForImageWidth:(double)arg1 ;
-(BOOL)wideColorSpace;
-(double)widthForImageHeight:(double)arg1 ;
-(CGSize)sizeThatFills:(CGSize)arg1 ;
@end

