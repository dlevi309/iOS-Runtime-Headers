/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RBSProcessIdentity, RBSProcessIdentifier, NSString;

@interface RBSProcessInstance : NSObject <RBSProcessMatching, RBSProcessIdentifier, NSCopying, RBSXPCSecureCoding, NSSecureCoding> {

	RBSProcessIdentity* _identity;
	RBSProcessIdentifier* _identifier;

}

@property (nonatomic,readonly) RBSProcessIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * identity;                  //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)instanceWithIdentifier:(id)arg1 identity:(id)arg2 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(int)rbs_pid;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(id)processPredicate;
-(RBSProcessIdentity *)identity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)copyWithEuid:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(RBSProcessIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

