/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUChoicePattern : NUPattern {

	NSArray* _choices;

}

@property (readonly) NSArray * choices;              //@synthesize choices=_choices - In the implementation block
-(id)init;
-(id)stringRepresentation;
-(id)tokens;
-(NSArray *)choices;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(id)initWithChoices:(id)arg1 ;
-(BOOL)isEqualToChoicePattern:(id)arg1 ;
@end

