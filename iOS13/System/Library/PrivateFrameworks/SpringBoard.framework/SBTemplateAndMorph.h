/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

