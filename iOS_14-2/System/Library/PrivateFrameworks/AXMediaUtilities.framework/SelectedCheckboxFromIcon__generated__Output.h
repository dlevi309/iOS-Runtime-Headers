/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSString, NSSet;

@interface SelectedCheckboxFromIcon__generated__Output : NSObject <MLFeatureProvider> {

	NSDictionary* _labelProbability;
	NSString* _label;

}

@property (nonatomic,retain) NSDictionary * labelProbability;              //@synthesize labelProbability=_labelProbability - In the implementation block
@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setLabelProbability:(NSDictionary *)arg1 ;
-(id)initWithLabelProbability:(id)arg1 label:(id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSDictionary *)labelProbability;
-(NSString *)label;
@end

