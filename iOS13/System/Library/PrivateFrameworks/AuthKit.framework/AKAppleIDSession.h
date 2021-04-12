/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSURLSessionAppleIDContext.h>

@protocol AKAnisetteServiceProtocol;
@class NSString, AKAnisetteProvisioningController, AKAnisetteData, NSLock, AKDevice;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {

	NSString* _serviceID;
	AKAnisetteProvisioningController* _nativeAnisetteController;
	AKAnisetteProvisioningController* _pairedDeviceAnisetteController;
	AKAnisetteData* _proxiedAnisetteData;
	NSLock* _anisetteControllerLock;
	AKDevice* _pairedDevice;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;

}

@property (nonatomic,retain) AKDevice * pairedDevice;                                         //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)relevantHTTPStatusCodes;
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDRequestOrHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setPairedDevice:(AKDevice *)arg1 ;
-(AKDevice *)pairedDevice;
-(id)appleIDHeadersForRequest:(id)arg1 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(BOOL*)arg3 ;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)_generateAppleIDHeadersForSessionTask:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleAnissetteURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_handleURLSwitchingResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_generateAppleIDHeadersForRequest:(id)arg1 error:(id*)arg2 ;
-(id)_genericAppleIDHeadersDictionaryForRequest:(id)arg1 ;
-(id)_nativeAnisetteController;
-(id)_pairedDeviceAnisetteController;
@end
