/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class CACTextMarker;

@interface CACTextMarkerRange : NSObject {

	CACTextMarker* _startMarker;
	CACTextMarker* _endMarker;

}

@property (nonatomic,readonly) CACTextMarker * startMarker;              //@synthesize startMarker=_startMarker - In the implementation block
@property (nonatomic,readonly) CACTextMarker * endMarker;                //@synthesize endMarker=_endMarker - In the implementation block
+(id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 ;
+(id)markerRangeWithNSRange:(NSRange)arg1 ;
+(id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 forTextElement:(id)arg3 ;
+(id)markerRangeWithArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)array;
-(BOOL)isEmpty;
-(NSRange)nsRange;
-(CACTextMarker *)startMarker;
-(CACTextMarker *)endMarker;
-(id)initWithStartMarker:(id)arg1 endMarker:(id)arg2 ;
-(BOOL)containsMarker:(id)arg1 forUIElement:(id)arg2 ;
-(BOOL)containsRange:(id)arg1 forUIElement:(id)arg2 ;
@end

