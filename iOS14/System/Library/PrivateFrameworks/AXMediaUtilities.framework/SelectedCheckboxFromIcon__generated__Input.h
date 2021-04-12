/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SelectedCheckboxFromIcon__generated__Input : NSObject <MLFeatureProvider> {

	CVBufferRef _image;

}

@property (assign,nonatomic) CVBufferRef image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setImage:(CVBufferRef)arg1 ;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(CVBufferRef)image;
@end

