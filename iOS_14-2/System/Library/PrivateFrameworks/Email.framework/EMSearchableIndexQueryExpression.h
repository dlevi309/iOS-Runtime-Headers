/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueryString:(id)arg1 ;
-(id)init;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

