/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(id)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)data;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

