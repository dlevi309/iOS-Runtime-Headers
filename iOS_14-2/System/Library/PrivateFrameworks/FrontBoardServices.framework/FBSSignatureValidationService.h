/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSApplicationTrustDataProvider.h>

@protocol _FBSMISInterfaceWrapper;
@class NSString;

@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {

	id<_FBSMISInterfaceWrapper> _misInterfaceWrapper;
	BOOL _authoritative;

}

@property (assign,nonatomic) BOOL authoritative;                    //@synthesize authoritative=_authoritative - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)trustStateForApplication:(id)arg1 ;
-(id)init;
-(id)_initWithMISInterfaceWrapper:(id)arg1 ;
-(void)_logTrustState:(unsigned long long)arg1 forApp:(id)arg2 reason:(id)arg3 ;
-(unsigned)signatureVersionForApp:(id)arg1 ;
-(unsigned long long)_validateApp:(id)arg1 ;
-(BOOL)authoritative;
-(void)setAuthoritative:(BOOL)arg1 ;
@end

