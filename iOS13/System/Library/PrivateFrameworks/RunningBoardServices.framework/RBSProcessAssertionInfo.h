/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface RBSProcessAssertionInfo : NSObject <NSCopying, BSXPCSecureCoding> {

	unsigned char _type;
	unsigned long long _reason;
	NSString* _explanation;
	NSString* _domain;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * explanation;                   //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned char type;                   //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(unsigned char)type;
-(unsigned long long)reason;
-(void)setName:(NSString *)arg1 ;
-(id)initWithType:(unsigned char)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(BOOL)isLegacyAssertionReason:(unsigned long long)arg1 ;
@end

