/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@class NSString;

@interface RBSDomainAttribute : RBSAttribute {

	NSString* _domain;
	NSString* _name;
	NSString* _sourceEnvironment;

}

@property (nonatomic,copy) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sourceEnvironment;                        //@synthesize sourceEnvironment=_sourceEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullyQualifiedName; 
+(id)attributeWithDomain:(id)arg1 name:(id)arg2 ;
+(id)attributeWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSString *)sourceEnvironment;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setSourceEnvironment:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)fullyQualifiedName;
-(BOOL)isEqual:(id)arg1 ;
@end

