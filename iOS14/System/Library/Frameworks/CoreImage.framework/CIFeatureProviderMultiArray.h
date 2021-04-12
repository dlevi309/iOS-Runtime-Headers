/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSString, NSSet;

@interface CIFeatureProviderMultiArray : NSObject <MLFeatureProvider> {

	MLMultiArray* multiArray;
	NSString* name;

}

@property (nonatomic,retain) MLMultiArray * multiArray; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSString *)name;
-(void)setMultiArray:(MLMultiArray *)arg1 ;
-(MLMultiArray *)multiArray;
-(id)initWithName:(id)arg1 array:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
@end

