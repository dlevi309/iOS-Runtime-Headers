/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextRange.h>

@class NSCountableTextLocation, NSString;

@interface NSCountableTextRange : NSTextRange {

	NSRange _range;

}

@property (readonly) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (readonly) NSCountableTextLocation * location; 
@property (readonly) NSCountableTextLocation * endLocation; 
@property (copy,readonly) NSString * type; 
@property (getter=isEndingAtEOD,readonly) BOOL endingAtEOD; 
+(BOOL)isBaseClassTestingMode;
+(void)setBaseClassTestingMode:(BOOL)arg1 ;
+(id)documentRange;
-(BOOL)isEndingAtEOD;
-(NSRange)range;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithLocation:(id)arg1 endLocation:(id)arg2 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToTextRange:(id)arg1 ;
-(id)textRangeByFormingUnionWithTextRange:(id)arg1 ;
-(BOOL)intersectsWithTextRange:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
@end

