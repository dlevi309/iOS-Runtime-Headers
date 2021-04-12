/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKTripleCondition : NSObject <NSCopying, NSSecureCoding> {

	 rawCondition;

}

@property (readonly,nonatomic) NSString * description; 
+(id)havingPredicate:(id)arg1 matchType:(long long)arg2 error:(id*)arg3 ;
+(id)havingSubject:(id)arg1 andAbject:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)or:(id)arg1 ;
-(id)and:(id)arg1 ;
-(id)init;
-(id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)evaluateOn:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
@end

