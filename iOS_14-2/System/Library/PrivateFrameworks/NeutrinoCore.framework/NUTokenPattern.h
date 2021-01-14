/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NSString;

@interface NUTokenPattern : NUPattern {

	NSString* _token;

}

@property (readonly) NSString * token;              //@synthesize token=_token - In the implementation block
-(id)tokens;
-(id)stringRepresentation;
-(id)init;
-(NSString *)token;
-(id)initWithToken:(id)arg1 ;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToTokenPattern:(id)arg1 ;
@end

