/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNMLModel.h>

@protocol SNMLModel;
@class MLModelDescription, NSString;

@interface SNMLLockedModel : NSObject <SNMLModel> {

	id<SNMLModel> _model;
	mutex _lock;

}

@property (readonly) MLModelDescription * modelDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
-(id)initWithModel:(id)arg1 ;
@end

