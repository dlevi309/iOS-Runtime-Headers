/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSDictionary, NSHTTPURLResponse, NSString, NSNumber;

@interface SSAuthenticationResponse : NSObject {

	NSDictionary* _responseDictionary;
	long long _urlBagType;
	NSHTTPURLResponse* _urlResponse;

}

@property (assign) long long URLBagType;                                       //@synthesize urlBagType=_urlBagType - In the implementation block
@property (readonly) NSDictionary * responseDictionary;                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (readonly) NSString * accountName; 
@property (readonly) long long accountKind; 
@property (readonly) NSNumber * accountUniqueIdentifier; 
@property (readonly) long long availableServiceTypes; 
@property (readonly) NSString * creditsString; 
@property (readonly) long long enabledServiceTypes; 
@property (getter=isManagedStudent,readonly) BOOL managedStudent; 
@property (getter=isNewCustomer,readonly) BOOL newCustomer; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * token; 
@property (readonly) NSNumber * failureType; 
@property (readonly) long long responseType; 
@property (readonly) NSString * userMessage; 
-(NSString *)accountName;
-(NSString *)storeFrontIdentifier;
-(long long)enabledServiceTypes;
-(long long)URLBagType;
-(NSDictionary *)responseDictionary;
-(id)newAccount;
-(id)initWithURLResponse:(id)arg1 dictionary:(id)arg2 ;
-(NSNumber *)failureType;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(NSNumber *)accountUniqueIdentifier;
-(BOOL)isManagedStudent;
-(long long)_responseTypeForFailureType:(long long)arg1 ;
-(long long)_responseTypeForErrorNumber:(long long)arg1 ;
-(long long)_responseTypeForStatusValue:(long long)arg1 ;
-(id)altDSID;
-(long long)availableServiceTypes;
-(BOOL)isNewCustomer;
-(long long)accountKind;
-(long long)responseType;
-(NSString *)token;
-(void)setURLBagType:(long long)arg1 ;
-(NSString *)userMessage;
-(NSHTTPURLResponse *)URLResponse;
-(NSString *)creditsString;
@end

