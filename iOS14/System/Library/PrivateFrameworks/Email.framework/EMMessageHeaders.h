/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface EMMessageHeaders : NSObject <NSSecureCoding> {

	NSDictionary* _headers;

}

@property (nonatomic,copy) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * headerKeys; 
+(BOOL)supportsSecureCoding;
-(id)initWithHeaders:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)headersForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSArray *)headerKeys;
@end

