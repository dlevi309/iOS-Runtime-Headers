/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSArray, NSDictionary, NSString;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	NSArray* _redeemCodes;
	BOOL _headless;
	BOOL _cameraRecognized;
	NSDictionary* _params;
	NSString* _logCorrelationKey;

}

@property (readonly) NSArray * redeemCodes; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) BOOL headless;                                              //@synthesize headless=_headless - In the implementation block
@property (assign) BOOL cameraRecognized;                                      //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (nonatomic,retain) NSString * logCorrelationKey;                     //@synthesize logCorrelationKey=_logCorrelationKey - In the implementation block
@property (nonatomic,retain) NSDictionary * params;                            //@synthesize params=_params - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSDictionary *)params;
-(void)setParams:(NSDictionary *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)logCorrelationKey;
-(void)setLogCorrelationKey:(NSString *)arg1 ;
-(NSArray *)redeemCodes;
-(void)startWithRedeemResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithRedeemCodes:(id)arg1 ;
-(BOOL)headless;
-(void)setHeadless:(BOOL)arg1 ;
-(BOOL)cameraRecognized;
-(void)setCameraRecognized:(BOOL)arg1 ;
@end

