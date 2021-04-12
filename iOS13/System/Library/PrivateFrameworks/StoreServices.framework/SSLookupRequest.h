/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, SSLookupProperties, NSString;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	long long _personalizationStyle;
	SSLookupProperties* _properties;
	long long _resultFilters;

}

@property (nonatomic,copy,readonly) SSLookupProperties * _lookupProperties; 
@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) long long localizationStyle; 
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,nonatomic) BOOL authenticatesIfNeeded; 
@property (assign,nonatomic) long long personalizationStyle;                             //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (assign,nonatomic) long long resultFilters;                                    //@synthesize resultFilters=_resultFilters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(id)initWithLocation:(id)arg1 ;
-(long long)personalizationStyle;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)keyProfile;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)startWithLookupBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)valueForRequestParameter:(id)arg1 ;
-(long long)localizationStyle;
-(void)setLocalizationStyle:(long long)arg1 ;
-(BOOL)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(BOOL)arg1 ;
-(SSLookupProperties *)_lookupProperties;
-(void)_setTimeoutInterval:(id)arg1 ;
-(long long)resultFilters;
-(void)setResultFilters:(long long)arg1 ;
@end

