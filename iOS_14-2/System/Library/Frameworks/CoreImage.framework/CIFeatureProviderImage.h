/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, NSSet;

@interface CIFeatureProviderImage : NSObject <MLFeatureProvider> {

	NSString* name;
	CVBufferRef buffer;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) CVBufferRef buffer; 
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setBuffer:(CVBufferRef)arg1 ;
-(NSString *)name;
-(CVBufferRef)buffer;
-(id)initWithName:(id)arg1 buffer:(CVBufferRef)arg2 ;
-(void)setName:(NSString *)arg1 ;
@end

