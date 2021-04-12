/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithImage__Placeholder__0:(CVBufferRef)arg1 ;
-(CVBufferRef)image__Placeholder__0;
-(void)setImage__Placeholder__0:(CVBufferRef)arg1 ;
@end

