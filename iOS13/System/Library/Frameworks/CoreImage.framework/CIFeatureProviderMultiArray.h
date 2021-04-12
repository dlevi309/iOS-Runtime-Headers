/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setMultiArray:(MLMultiArray *)arg1 ;
-(id)initWithName:(id)arg1 array:(id)arg2 ;
-(MLMultiArray *)multiArray;
@end

