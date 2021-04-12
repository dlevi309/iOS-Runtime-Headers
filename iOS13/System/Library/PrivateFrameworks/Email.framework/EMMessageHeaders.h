/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)headersForKey:(id)arg1 ;
-(id)initWithHeaders:(id)arg1 ;
-(NSArray *)headerKeys;
@end

