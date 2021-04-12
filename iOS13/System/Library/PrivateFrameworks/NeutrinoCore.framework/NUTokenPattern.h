/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUPattern.h>

@class NSString;

@interface NUTokenPattern : NUPattern {

	NSString* _token;

}

@property (readonly) NSString * token;              //@synthesize token=_token - In the implementation block
-(id)init;
-(NSString *)token;
-(id)stringRepresentation;
-(id)initWithToken:(id)arg1 ;
-(id)tokens;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToTokenPattern:(id)arg1 ;
@end

