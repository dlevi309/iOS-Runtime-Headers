/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSArray;

@interface CHContextualTextResults : NSObject {

	NSArray* _textResults;

}

@property (nonatomic,retain) NSArray * textResults;              //@synthesize textResults=_textResults - In the implementation block
-(void)dealloc;
-(id)topTranscription;
-(id)initWithTextResults:(id)arg1 ;
-(id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:(NSRange)arg1 intersectionRanges:(id*)arg2 ;
-(NSArray *)textResults;
-(void)setTextResults:(NSArray *)arg1 ;
@end

