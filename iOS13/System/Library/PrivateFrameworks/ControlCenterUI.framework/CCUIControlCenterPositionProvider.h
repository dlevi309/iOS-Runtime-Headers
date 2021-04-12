/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


#import <ControlCenterUI/ControlCenterUI-Structs.h>
@class NSArray, NSDictionary;

@interface CCUIControlCenterPositionProvider : NSObject {

	NSArray* _packingRules;
	NSDictionary* _rectByIdentifier;
	CCUILayoutSize _layoutSize;

}

@property (nonatomic,readonly) CCUILayoutSize layoutSize;                     //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,readonly) CCUILayoutSize maximumLayoutSize; 
-(CCUILayoutSize)layoutSize;
-(CCUILayoutSize)maximumLayoutSize;
-(id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 packingOrder:(unsigned long long)arg3 startPosition:(CCUILayoutPoint)arg4 maximumSize:(CCUILayoutSize)arg5 outputLayoutSize:(out CCUILayoutSize*)arg6 ;
-(id)initWithPackingRules:(id)arg1 ;
-(void)regenerateRectsWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 ;
-(CCUILayoutRect)layoutRectForIdentifier:(id)arg1 ;
@end

