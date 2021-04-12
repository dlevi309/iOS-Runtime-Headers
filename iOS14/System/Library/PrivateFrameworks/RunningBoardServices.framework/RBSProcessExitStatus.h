/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBSProcessExitStatus : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying> {

	unsigned _domain;
	unsigned long long _code;

}

@property (nonatomic,readonly) unsigned domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)statusWithDomain:(unsigned)arg1 code:(unsigned long long)arg2 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(BOOL)isSignal;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isJetsam;
-(id)_dictionaryRepresentation;
-(unsigned)domain;
-(id)error;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)isCrash;
-(id)_initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isFairPlayFailure;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)code;
-(BOOL)_isVoluntary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

