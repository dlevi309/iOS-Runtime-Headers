/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <NSCopying> {

	long long _qualityOfService;
	ICStoreRequestContext* _storeRequestContext;
	ICUserVerificationContext* _verificationContext;

}

@property (assign,nonatomic) long long qualityOfService;                                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;                           //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy,readonly) ICUserVerificationContext * verificationContext;              //@synthesize verificationContext=_verificationContext - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(ICUserVerificationContext *)verificationContext;
-(id)initWithVerificationContext:(id)arg1 ;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(long long)qualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

