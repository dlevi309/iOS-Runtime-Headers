/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/


@class NSString, NSURL, NSArray;

@interface RCRequestInfo : NSObject {

	NSString* _requestKey;
	NSString* _responseKey;
	NSURL* _fallbackURL;
	unsigned long long _requestType;
	NSArray* _additionalChangeTags;

}

@property (nonatomic,copy,readonly) NSString * requestKey;                  //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseKey;                 //@synthesize responseKey=_responseKey - In the implementation block
@property (nonatomic,readonly) NSURL * fallbackURL;                         //@synthesize fallbackURL=_fallbackURL - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) NSArray * additionalChangeTags;              //@synthesize additionalChangeTags=_additionalChangeTags - In the implementation block
-(NSURL *)fallbackURL;
-(NSString *)requestKey;
-(unsigned long long)requestType;
-(id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 ;
-(id)description;
-(NSArray *)additionalChangeTags;
-(unsigned long long)hash;
-(NSString *)responseKey;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 requestType:(unsigned long long)arg4 additionalChangeTags:(id)arg5 ;
@end

