/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RBSXPCServiceDefinition : NSObject <RBSXPCSecureCoding, NSSecureCoding> {

	NSString* _identifier;
	long long _variant;
	long long _scope;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long variant;                       //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) long long scope;                         //@synthesize scope=_scope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)definitionWithIdentifier:(id)arg1 variant:(long long)arg2 scope:(long long)arg3 ;
-(long long)scope;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(long long)variant;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

