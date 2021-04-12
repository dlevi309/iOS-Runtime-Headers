/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, NSDictionary, NSSet;

@interface IconPictureOutput : NSObject <MLFeatureProvider> {

	NSString* _label;
	NSDictionary* _labelProbability;

}

@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSDictionary * labelProbability;              //@synthesize labelProbability=_labelProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setLabelProbability:(NSDictionary *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 labelProbability:(id)arg2 ;
-(NSDictionary *)labelProbability;
-(NSString *)label;
@end

