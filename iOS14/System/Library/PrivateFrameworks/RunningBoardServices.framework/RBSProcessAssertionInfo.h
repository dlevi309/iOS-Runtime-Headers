/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSString;

@interface RBSProcessAssertionInfo : NSObject <NSCopying, RBSXPCSecureCoding> {

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
+(BOOL)supportsRBSXPCSecureCoding;
-(void)setExplanation:(NSString *)arg1 ;
-(id)initWithType:(unsigned char)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(BOOL)isLegacyAssertionReason:(unsigned long long)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)reason;
-(unsigned char)type;
-(unsigned long long)hash;
-(NSString *)explanation;
-(void)setName:(NSString *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

