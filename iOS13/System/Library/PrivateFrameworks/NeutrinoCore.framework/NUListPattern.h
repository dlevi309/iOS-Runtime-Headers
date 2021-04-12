/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUListPattern : NUPattern {

	NSArray* _list;

}

@property (readonly) NSArray * list;              //@synthesize list=_list - In the implementation block
-(id)init;
-(NSArray *)list;
-(id)stringRepresentation;
-(id)tokens;
-(id)initWithList:(id)arg1 ;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToListPattern:(id)arg1 ;
@end

