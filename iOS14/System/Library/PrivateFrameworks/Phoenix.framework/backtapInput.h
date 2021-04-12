/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLMultiArray;

@interface backtapInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _model_input;

}

@property (nonatomic,retain) MLMultiArray * model_input;              //@synthesize model_input=_model_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithModel_input:(id)arg1 ;
-(MLMultiArray *)model_input;
-(void)setModel_input:(MLMultiArray *)arg1 ;
@end

