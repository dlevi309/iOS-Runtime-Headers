/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUGroupPattern : NUPattern {

	NSArray* _group;

}

@property (readonly) NSArray * group;              //@synthesize group=_group - In the implementation block
-(NSArray *)group;
-(id)tokens;
-(id)stringRepresentation;
-(id)init;
-(id)initWithGroup:(id)arg1 ;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToGroupPattern:(id)arg1 ;
@end

