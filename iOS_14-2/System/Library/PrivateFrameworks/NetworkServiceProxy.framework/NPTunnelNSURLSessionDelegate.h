/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSString;

@interface NPTunnelNSURLSessionDelegate : NSObject <NSURLSessionDelegate> {

	BOOL _enableExtendedValidation;
	BOOL _ignoreInvalidCerts;
	BOOL _revocationFailClosed;
	NSString* _validationHostname;
	NSString* _leafOID;

}

@property (retain) NSString * validationHostname;                   //@synthesize validationHostname=_validationHostname - In the implementation block
@property (assign) BOOL enableExtendedValidation;                   //@synthesize enableExtendedValidation=_enableExtendedValidation - In the implementation block
@property (assign) BOOL ignoreInvalidCerts;                         //@synthesize ignoreInvalidCerts=_ignoreInvalidCerts - In the implementation block
@property (retain) NSString * leafOID;                              //@synthesize leafOID=_leafOID - In the implementation block
@property (assign) BOOL revocationFailClosed;                       //@synthesize revocationFailClosed=_revocationFailClosed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)ignoreInvalidCerts;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setEnableExtendedValidation:(BOOL)arg1 ;
-(void)setLeafOID:(NSString *)arg1 ;
-(BOOL)enableExtendedValidation;
-(void)setIgnoreInvalidCerts:(BOOL)arg1 ;
-(void)setValidationHostname:(NSString *)arg1 ;
-(void)setRevocationFailClosed:(BOOL)arg1 ;
-(BOOL)revocationFailClosed;
-(NSString *)leafOID;
-(NSString *)validationHostname;
@end

