/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSString;

@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding> {

	 type;
	 negated;
	 $__lazy_storage_$_sql;

}

@property (readonly,nonatomic) NSPredicate * predicate; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)or:(id)arg1 ;
-(NSPredicate *)predicate;
-(id)and:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(BOOL)arg1 ;
-(NSString *)description;
-(id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(BOOL)arg3 ;
-(BOOL)evaluateOn:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
@end

