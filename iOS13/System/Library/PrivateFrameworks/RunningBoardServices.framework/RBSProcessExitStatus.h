/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBSProcessExitStatus : NSObject <BSXPCSecureCoding, NSCopying> {

	unsigned _domain;
	unsigned long long _code;

}

@property (nonatomic,readonly) unsigned domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)_nameForDomain:(unsigned)arg1 ;
+(id)_nameForDomain:(unsigned)arg1 code:(unsigned long long)arg2 ;
+(id)statusWithDomain:(unsigned)arg1 code:(unsigned long long)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)domain;
-(unsigned long long)code;
-(BOOL)isValid;
-(id)error;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)_isVoluntary;
-(BOOL)isSignal;
-(BOOL)isJetsam;
-(BOOL)isCrash;
-(BOOL)isFairPlayFailure;
-(id)_initWithDictionaryRepresentation:(id)arg1 ;
-(id)_dictionaryRepresentation;
@end

