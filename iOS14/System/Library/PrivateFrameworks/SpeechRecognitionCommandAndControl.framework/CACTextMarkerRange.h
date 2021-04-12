/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)array;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSRange)nsRange;
-(id)initWithStartMarker:(id)arg1 endMarker:(id)arg2 ;
-(CACTextMarker *)startMarker;
-(CACTextMarker *)endMarker;
-(BOOL)containsMarker:(id)arg1 forUIElement:(id)arg2 ;
-(BOOL)containsRange:(id)arg1 forUIElement:(id)arg2 ;
@end

