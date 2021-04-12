/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _LTSpeechRecognitionBin : NSObject <NSSecureCoding> {

	NSArray* _alternatives;
	unsigned long long _bestAlternativeIndex;

}

@property (nonatomic,retain) NSArray * alternatives;                               //@synthesize alternatives=_alternatives - In the implementation block
@property (assign,nonatomic) unsigned long long bestAlternativeIndex;              //@synthesize bestAlternativeIndex=_bestAlternativeIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(NSArray *)alternatives;
-(id)initWithCoder:(id)arg1 ;
-(void)setBestAlternativeIndex:(unsigned long long)arg1 ;
-(unsigned long long)bestAlternativeIndex;
@end

