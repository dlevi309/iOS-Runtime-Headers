/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class SGModelSource, PMLSparseVector;

@interface SGModelFeatures : NSObject {

	SGModelSource* _source;
	PMLSparseVector* _vector;

}
-(id)vector;
-(id)source;
-(id)sessionDescriptor;
-(id)initWithSource:(id)arg1 vector:(id)arg2 ;
@end

