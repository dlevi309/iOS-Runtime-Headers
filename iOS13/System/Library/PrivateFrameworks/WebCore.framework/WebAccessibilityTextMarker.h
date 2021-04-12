/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityTextMarker : NSObject {

	AXObjectCache* _cache;
	TextMarkerData* _textMarkerData;

}
+(id)textMarkerWithVisiblePosition:(VisiblePosition*)arg1 cache:(AXObjectCache*)arg2 ;
+(id)textMarkerWithCharacterOffset:(CharacterOffset*)arg1 cache:(AXObjectCache*)arg2 ;
+(id)startOrEndTextMarkerForRange:(RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >*)arg1 isStart:(BOOL)arg2 cache:(AXObjectCache*)arg3 ;
-(id)description;
-(id)dataRepresentation;
-(id)initWithData:(id)arg1 cache:(AXObjectCache*)arg2 ;
-(AccessibilityObject*)accessibilityObject;
-(id)initWithTextMarker:(TextMarkerData*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithData:(id)arg1 accessibilityObject:(id)arg2 ;
-(VisiblePosition*)visiblePosition;
-(CharacterOffset*)characterOffset;
-(BOOL)isIgnored;
@end

