/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUChoicePattern : NUPattern {

	NSArray* _choices;

}

@property (readonly) NSArray * choices;              //@synthesize choices=_choices - In the implementation block
-(id)tokens;
-(id)stringRepresentation;
-(id)init;
-(NSArray *)choices;
-(id)initWithChoices:(id)arg1 ;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToChoicePattern:(id)arg1 ;
@end

