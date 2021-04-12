/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)buffer;
-(id)initWithName:(id)arg1 buffer:(CVBufferRef)arg2 ;
@end

