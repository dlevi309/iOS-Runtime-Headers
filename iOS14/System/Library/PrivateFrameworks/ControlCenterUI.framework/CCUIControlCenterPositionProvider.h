/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPackingRules:(id)arg1 ;
-(CCUILayoutSize)maximumLayoutSize;
-(id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 packingOrder:(unsigned long long)arg3 startPosition:(CCUILayoutPoint)arg4 maximumSize:(CCUILayoutSize)arg5 outputLayoutSize:(out CCUILayoutSize*)arg6 ;
-(void)regenerateRectsWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 ;
-(CCUILayoutRect)layoutRectForIdentifier:(id)arg1 ;
@end

