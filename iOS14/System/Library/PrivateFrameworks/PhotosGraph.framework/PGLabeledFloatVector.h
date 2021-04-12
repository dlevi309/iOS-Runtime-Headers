/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class MAFloatVector;

@interface PGLabeledFloatVector : NSObject {

	MAFloatVector* _floatVector;
	MAFloatVector* _label;

}

@property (nonatomic,readonly) MAFloatVector * floatVector;              //@synthesize floatVector=_floatVector - In the implementation block
@property (nonatomic,readonly) MAFloatVector * label;                    //@synthesize label=_label - In the implementation block
-(MAFloatVector *)label;
-(id)initWithFloatVector:(id)arg1 label:(id)arg2 ;
-(MAFloatVector *)floatVector;
@end

