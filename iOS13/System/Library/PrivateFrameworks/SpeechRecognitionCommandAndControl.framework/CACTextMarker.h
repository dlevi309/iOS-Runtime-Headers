/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSData;

@interface CACTextMarker : NSObject {

	unsigned long long _index;
	NSData* _data;

}
+(id)markerWithIndex:(unsigned long long)arg1 ;
+(id)markerWithData:(id)arg1 ;
+(BOOL)marker:(id)arg1 precedesOrEqualsMarker:(id)arg2 forUIElement:(id)arg3 ;
+(unsigned long long)lengthFromMarker:(id)arg1 toMarker:(id)arg2 forUIElement:(id)arg3 ;
+(BOOL)marker:(id)arg1 precedesMarker:(id)arg2 forUIElement:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(unsigned long long)index;
-(void)setData:(id)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
@end

