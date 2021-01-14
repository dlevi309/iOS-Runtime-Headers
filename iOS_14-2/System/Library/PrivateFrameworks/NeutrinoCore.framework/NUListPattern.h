/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUListPattern : NUPattern {

	NSArray* _list;

}

@property (readonly) NSArray * list;              //@synthesize list=_list - In the implementation block
-(NSArray *)list;
-(id)tokens;
-(id)stringRepresentation;
-(id)init;
-(id)initWithList:(id)arg1 ;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToListPattern:(id)arg1 ;
@end

