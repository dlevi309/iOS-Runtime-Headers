/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface backtapOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _model_output;

}

@property (nonatomic,retain) MLMultiArray * model_output;              //@synthesize model_output=_model_output - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithModel_output:(id)arg1 ;
-(MLMultiArray *)model_output;
-(void)setModel_output:(MLMultiArray *)arg1 ;
@end

