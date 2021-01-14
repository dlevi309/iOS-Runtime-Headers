/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/


#import <AXRuntime/AXRuntime-Structs.h>
@class AXMVisionFeature, NSMutableArray;

@interface AXMLElementGroup : NSObject {

	BOOL _topLevel;
	BOOL _includeChildren;
	AXMVisionFeature* _feature;
	NSMutableArray* _subfeatures;
	double _confidence;
	CGRect _frame;

}

@property (nonatomic,retain) AXMVisionFeature * feature;                //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSMutableArray * subfeatures;              //@synthesize subfeatures=_subfeatures - In the implementation block
@property (assign,nonatomic) BOOL topLevel;                             //@synthesize topLevel=_topLevel - In the implementation block
@property (assign,nonatomic) BOOL includeChildren;                      //@synthesize includeChildren=_includeChildren - In the implementation block
@property (assign,nonatomic) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) CGRect frame;                              //@synthesize frame=_frame - In the implementation block
-(double)confidence;
-(AXMVisionFeature *)feature;
-(id)init;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(NSMutableArray *)subfeatures;
-(void)setIncludeChildren:(BOOL)arg1 ;
-(id)textLabel;
-(BOOL)topLevel;
-(BOOL)includeChildren;
-(void)setFeature:(AXMVisionFeature *)arg1 ;
-(void)setTopLevel:(BOOL)arg1 ;
-(void)setSubfeatures:(NSMutableArray *)arg1 ;
-(id)childFeatures;
@end

