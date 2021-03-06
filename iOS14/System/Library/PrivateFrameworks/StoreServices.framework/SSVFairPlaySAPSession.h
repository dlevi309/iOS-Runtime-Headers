/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSVSAPContext.h>

@protocol OS_dispatch_queue;
@class SSBag, NSObject, NSData, SSVFairPlaySAPContext, SSURLBag, SSVURLBagInterpreter, NSString;

@interface SSVFairPlaySAPSession : NSObject <SSVSAPContext> {

	SSBag* _bag;
	NSObject*<OS_dispatch_queue> _completionBlockQueue;
	NSData* _certificateData;
	SSVFairPlaySAPContext* _context;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _primed;
	SSURLBag* _urlBag;
	long long _version;
	BOOL _useSharedBagInterpreter;
	SSVURLBagInterpreter* _urlBagInterpreter;

}

@property (nonatomic,readonly) long long version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) SSVURLBagInterpreter * urlBagInterpreter;              //@synthesize urlBagInterpreter=_urlBagInterpreter - In the implementation block
@property (assign,nonatomic) BOOL useSharedBagInterpreter;                            //@synthesize useSharedBagInterpreter=_useSharedBagInterpreter - In the implementation block
@property (nonatomic,readonly) BOOL primed;                                           //@synthesize primed=_primed - In the implementation block
@property (copy) NSData * certificateData; 
@property (readonly) long long SAPVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDefaultSession;
+(id)sharedPrimeSession;
-(id)signatureWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
-(void)primeSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_urlBagInterpreter;
-(void)signData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)establishSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)primed;
-(id)initWithSAPVersion:(long long)arg1 ;
-(SSVURLBagInterpreter *)urlBagInterpreter;
-(NSData *)certificateData;
-(BOOL)useSharedBagInterpreter;
-(id)initWithURLBagDictionary:(id)arg1 SAPVersion:(long long)arg2 ;
-(id)initWithSSBag:(id)arg1 SAPVersion:(long long)arg2 ;
-(BOOL)_verifyPrimeResponse:(id)arg1 ;
-(long long)SAPVersion;
-(id)_loadCertificateData;
-(id)_initWithURLBagInterpreter:(id)arg1 SAPVersion:(long long)arg2 ;
-(id)_postExchangeData:(id)arg1 ;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(void)setUseSharedBagInterpreter:(BOOL)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(BOOL)_primeTheConnection;
-(id)_establishContext;
-(BOOL)_shouldRetrySAPOperationForError:(id)arg1 ;
-(id)_signData:(id)arg1 error:(id*)arg2 ;
-(void)verifySignature:(id)arg1 forData:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)version;
-(id)_initSSVFairPlaySAPSession;
-(id)initWithURLBag:(id)arg1 ;
-(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(id)initWithURLBag:(id)arg1 SAPVersion:(long long)arg2 ;
@end

