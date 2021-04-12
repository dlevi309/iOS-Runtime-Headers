/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ATXCustomIntentDescription : NSObject <NSSecureCoding> {

	NSString* _typeName;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * typeName;                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)typeName;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)createIntent;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTypeName:(id)arg1 parameters:(id)arg2 ;
@end

