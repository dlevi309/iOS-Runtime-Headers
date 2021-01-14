/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityTextMarker : NSObject {

	TextMarkerData* _textMarkerData;

}
+(id)textMarkerWithVisiblePosition:(VisiblePosition*)arg1 cache:(AXObjectCache*)arg2 ;
+(id)textMarkerWithCharacterOffset:(CharacterOffset*)arg1 cache:(AXObjectCache*)arg2 ;
+(id)startOrEndTextMarkerForRange:(const Optional<WebCore::SimpleRange>*)arg1 isStart:(BOOL)arg2 cache:(AXObjectCache*)arg3 ;
-(id)dataRepresentation;
-(id)description;
-(BOOL)isIgnored;
-(VisiblePosition*)visiblePosition;
-(id)initWithTextMarker:(TextMarkerData*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithData:(id)arg1 accessibilityObject:(id)arg2 ;
-(CharacterOffset*)characterOffset;
-(AccessibilityObject*)accessibilityObject;
-(id)initWithData:(id)arg1 cache:(AXObjectCache*)arg2 ;
@end

