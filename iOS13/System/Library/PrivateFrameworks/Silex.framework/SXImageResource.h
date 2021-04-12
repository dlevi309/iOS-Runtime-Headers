/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(CGSize)dimensions;
-(NSString *)imageIdentifier;
-(double)heightForImageWidth:(double)arg1;
-(BOOL)wideColorSpace;
-(double)widthForImageHeight:(double)arg1;
-(CGSize*)sizeThatFills:(CGSize)arg1;

@end


@class NSString, NSURL;

@interface SXImageResource : SXResource <SXImageResource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) BOOL wideColorSpace; 
-(NSString *)imageIdentifier;
-(CGSize)dimensions;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)heightForImageWidth:(double)arg1 ;
-(BOOL)wideColorSpace;
-(double)widthForImageHeight:(double)arg1 ;
-(CGSize)sizeThatFills:(CGSize)arg1 ;
@end

