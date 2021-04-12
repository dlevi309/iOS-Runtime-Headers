/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)domain;
-(void)setName:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)sourceEnvironment;
-(id)_initWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3 ;
-(void)setSourceEnvironment:(NSString *)arg1 ;
-(NSString *)fullyQualifiedName;
@end

