/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKTriple : NSObject <NSSecureCoding> {

	 value;

}

@property (readonly,nonatomic) NSString * subject; 
@property (readonly,nonatomic) NSString * predicate; 
@property (readonly,nonatomic) NSString * object; 
@property (readonly,nonatomic) long long weight; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long hash; 
+(BOOL)supportsSecureCoding;
-(NSString *)subject;
-(NSString *)predicate;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)object;
-(long long)weight;
-(NSString *)description;
-(id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 weight:(long long)arg4 ;
-(long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

