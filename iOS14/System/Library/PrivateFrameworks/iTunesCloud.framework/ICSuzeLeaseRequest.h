/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, ICStoreRequestContext;

@interface ICSuzeLeaseRequest : NSObject <NSCopying> {

	NSData* _clientData;
	NSString* _leaseID;
	long long _mediaType;
	long long _qualityOfService;
	ICStoreRequestContext* _requestContext;
	long long _requestType;

}

@property (nonatomic,copy,readonly) NSData * clientData;                                 //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,copy,readonly) NSString * leaseID;                                  //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,readonly) long long requestType;                                    //@synthesize requestType=_requestType - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)mediaType;
-(long long)requestType;
-(NSString *)leaseID;
-(ICStoreRequestContext *)requestContext;
-(id)initWithRequestContext:(id)arg1 requestType:(long long)arg2 leaseID:(id)arg3 mediaType:(long long)arg4 clientData:(id)arg5 ;
-(NSData *)clientData;
-(long long)qualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

