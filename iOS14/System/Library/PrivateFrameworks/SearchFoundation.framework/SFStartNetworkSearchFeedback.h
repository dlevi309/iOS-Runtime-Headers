/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSString, NSDictionary;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback {

	NSString* _url;
	NSDictionary* _headers;
	unsigned long long _endpoint;
	NSString* _experimentId;
	NSString* _treatmentId;

}

@property (nonatomic,copy) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,copy) NSString * treatmentId;                     //@synthesize treatmentId=_treatmentId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)endpoint;
-(NSString *)treatmentId;
-(NSString *)url;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)experimentId;
-(void)setUrl:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 experimentId:(id)arg7 treatmentId:(id)arg8 ;
@end

