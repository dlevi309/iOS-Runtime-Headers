/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SignificantActivityInput : NSObject <MLFeatureProvider> {

	CVBufferRef _image__Placeholder__0;

}

@property (assign,nonatomic) CVBufferRef image__Placeholder__0;              //@synthesize image__Placeholder__0=_image__Placeholder__0 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)dealloc;
-(id)initWithImage__Placeholder__0:(CVBufferRef)arg1 ;
-(id)initWithImage__Placeholder__0FromCGImage:(CGImageRef)arg1 error:(id*)arg2 ;
-(id)initWithImage__Placeholder__0AtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setImage__Placeholder__0WithCGImage:(CGImageRef)arg1 error:(id*)arg2 ;
-(BOOL)setImage__Placeholder__0WithURL:(id)arg1 error:(id*)arg2 ;
-(CVBufferRef)image__Placeholder__0;
-(void)setImage__Placeholder__0:(CVBufferRef)arg1 ;
@end

