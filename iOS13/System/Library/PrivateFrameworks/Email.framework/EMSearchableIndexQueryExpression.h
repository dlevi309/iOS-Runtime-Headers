/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying> {

	NSString* _queryString;

}

@property (nonatomic,copy) NSString * queryString;                     //@synthesize queryString=_queryString - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)expressionWithQueryString:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)initWithQueryString:(id)arg1 ;
@end

