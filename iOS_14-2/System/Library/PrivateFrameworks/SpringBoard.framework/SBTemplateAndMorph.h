/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBPolygon, SBTouchTemplate;

@interface SBTemplateAndMorph : NSObject {

	SBPolygon* _morphedCandidate;
	SBTouchTemplate* _touchTemplate;

}

@property (nonatomic,readonly) SBPolygon * morphedCandidate;                 //@synthesize morphedCandidate=_morphedCandidate - In the implementation block
@property (nonatomic,readonly) SBTouchTemplate * touchTemplate;              //@synthesize touchTemplate=_touchTemplate - In the implementation block
-(id)initWithTemplate:(id)arg1 morph:(id)arg2 ;
-(SBPolygon *)morphedCandidate;
-(SBTouchTemplate *)touchTemplate;
@end

