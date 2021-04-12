/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSProcessIdentifier, RBSProcessIdentity, NSString;

@interface RBSTarget : NSObject <RBSXPCSecureCoding, RBSProcessMatching, NSCopying> {

	RBSProcessIdentifier* _processIdentifier;
	RBSProcessIdentity* _processIdentity;
	NSString* _environment;
	NSString* _shortDescription;

}

@property (getter=isSystem,nonatomic,readonly) BOOL system; 
@property (nonatomic,readonly) RBSProcessIdentifier * processIdentifier;              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * processIdentity;                  //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * environment;                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription;                           //@synthesize shortDescription=_shortDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)targetWithProcessIdentity:(id)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithPid:(int)arg1 environmentIdentifier:(id)arg2 ;
+(id)currentProcess;
+(id)targetWithProcessIdentity:(id)arg1 ;
+(id)targetWithProcessIdentifier:(id)arg1 ;
+(id)targetWithProcessIdentifier:(id)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithPid:(int)arg1 ;
+(id)systemTarget;
-(BOOL)isSystem;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessIdentifier *)processIdentifier;
-(id)init;
-(id)processPredicate;
-(NSString *)shortDescription;
-(NSString *)debugDescription;
-(RBSProcessIdentity *)processIdentity;
-(NSString *)description;
-(id)copyWithEuid:(unsigned)arg1 ;
-(unsigned long long)hash;
-(NSString *)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

