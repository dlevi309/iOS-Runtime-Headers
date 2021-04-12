/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSError, HMSetupAccessoryPayload;

@interface HFSetupAccessoryResult : NSObject {

	BOOL _hasAddRequest;
	BOOL _isValidForPairing;
	NSError* _error;
	HMSetupAccessoryPayload* _setupPayload;

}

@property (nonatomic,readonly) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) HMSetupAccessoryPayload * setupPayload;              //@synthesize setupPayload=_setupPayload - In the implementation block
@property (nonatomic,readonly) BOOL hasAddRequest;                                  //@synthesize hasAddRequest=_hasAddRequest - In the implementation block
@property (nonatomic,readonly) BOOL isValidForPairing;                              //@synthesize isValidForPairing=_isValidForPairing - In the implementation block
+(BOOL)isHomeKitURL:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(BOOL)hasAddRequest;
-(id)initWithSetupCode:(id)arg1 ;
-(HMSetupAccessoryPayload *)setupPayload;
-(BOOL)isValidForPairing;
-(BOOL)isAllZerosCode;
-(id)initWithPayload:(id)arg1 error:(id)arg2 hasAddRequest:(BOOL)arg3 ;
-(id)initWithPayload:(id)arg1 hasAddRequest:(BOOL)arg2 ;
-(id)initWithSetupURL:(id)arg1 ;
@end

