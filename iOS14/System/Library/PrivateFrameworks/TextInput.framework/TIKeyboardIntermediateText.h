/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding> {

	unsigned long long _selectionOffset;
	NSString* _inputString;
	NSString* _displayString;
	long long _candidateOffset;
	NSArray* _liveConversionSegments;
	long long _highlightSegmentIndex;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSString * inputString;                        //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,readonly) NSString * displayString;                      //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) NSRange selectedRange; 
@property (nonatomic,readonly) long long candidateOffset;                     //@synthesize candidateOffset=_candidateOffset - In the implementation block
@property (nonatomic,readonly) NSArray * liveConversionSegments;              //@synthesize liveConversionSegments=_liveConversionSegments - In the implementation block
@property (nonatomic,readonly) long long highlightSegmentIndex;               //@synthesize highlightSegmentIndex=_highlightSegmentIndex - In the implementation block
@property (nonatomic,readonly) NSString * searchString;                       //@synthesize searchString=_searchString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 candidateOffset:(long long)arg5 liveConversionSegments:(id)arg6 highlightSegmentIndex:(long long)arg7 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
-(NSString *)displayString;
-(id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 candidateOffset:(unsigned long long)arg5 liveConversionSegments:(id)arg6 highlightSegmentIndex:(long long)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)candidateOffset;
-(NSArray *)liveConversionSegments;
-(long long)highlightSegmentIndex;
-(NSRange)selectedRange;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)inputString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
@end

