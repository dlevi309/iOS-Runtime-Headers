/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class RBSProcessIdentity, RBSProcessIdentifier, NSString;

@interface RBSProcessInstance : NSObject <RBSProcessMatching, RBSProcessIdentifier, NSCopying, BSXPCSecureCoding> {

	RBSProcessIdentity* _identity;
	RBSProcessIdentifier* _identifier;

}

@property (nonatomic,readonly) RBSProcessIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * identity;                  //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)instanceWithIdentifier:(id)arg1 identity:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RBSProcessIdentifier *)identifier;
-(RBSProcessIdentity *)identity;
-(BOOL)matchesProcess:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 identity:(id)arg2 ;
-(id)copyWithEuid:(unsigned)arg1 ;
-(int)rbs_pid;
-(id)processPredicate;
@end

