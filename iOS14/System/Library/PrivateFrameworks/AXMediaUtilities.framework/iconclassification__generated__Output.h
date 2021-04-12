/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSString, NSSet;

@interface iconclassification__generated__Output : NSObject <MLFeatureProvider> {

	NSDictionary* _output1;
	NSString* _classLabel;

}

@property (nonatomic,retain) NSDictionary * output1;              //@synthesize output1=_output1 - In the implementation block
@property (nonatomic,retain) NSString * classLabel;               //@synthesize classLabel=_classLabel - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setOutput1:(NSDictionary *)arg1 ;
-(id)initWithOutput1:(id)arg1 classLabel:(id)arg2 ;
-(void)setClassLabel:(NSString *)arg1 ;
-(NSDictionary *)output1;
-(NSString *)classLabel;
@end

