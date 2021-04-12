/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RBSXPCServiceDefinition : NSObject <BSXPCSecureCoding, NSSecureCoding> {

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
+(BOOL)supportsBSXPCSecureCoding;
+(id)definitionWithIdentifier:(id)arg1 variant:(long long)arg2 scope:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)variant;
-(long long)scope;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

