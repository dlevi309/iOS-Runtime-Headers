/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSError;

@interface CRKASMCertificateParserResult : NSObject {

	NSString* _userIdentifier;
	NSError* _validationError;

}

@property (nonatomic,readonly) NSError * validationError;                   //@synthesize validationError=_validationError - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
+(BOOL)certificate:(id)arg1 hasCommonNameWithPrefix:(id)arg2 ;
+(id)resultForCertificate:(id)arg1 expectedCommonNamePrefix:(id)arg2 expectedUserIdentifier:(id)arg3 ;
-(NSString *)userIdentifier;
-(id)initWithUserIdentifier:(id)arg1 validationError:(id)arg2 ;
-(NSError *)validationError;
-(BOOL)isCertificateValidWithError:(id*)arg1 ;
@end

