/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, AKAppleIDAuthenticationContext, NSData;

@interface FACircleContext : NSObject <NSCoding, NSSecureCoding> {

	NSString* _eventType;
	NSString* _clientName;
	NSString* _clientBundleID;
	NSDictionary* _additionalParameters;
	NSURL* _urlForContext;
	NSString* _urlEndpoint;
	AKAppleIDAuthenticationContext* _authContext;

}

@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,copy) NSURL * urlForContext;                                       //@synthesize urlForContext=_urlForContext - In the implementation block
@property (nonatomic,copy) NSString * urlEndpoint;                                      //@synthesize urlEndpoint=_urlEndpoint - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authContext;              //@synthesize authContext=_authContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventType;                               //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * clientName;                                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                   //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalParameters;                         //@synthesize additionalParameters=_additionalParameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithData:(id)arg1 ;
-(NSString *)clientBundleID;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)eventType;
-(NSData *)dataRepresentation;
-(id)initWithEventType:(id)arg1 ;
-(id)init;
-(NSString *)clientName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)setClientBundleID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKAppleIDAuthenticationContext *)authContext;
-(void)setAuthContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(void)setAdditionalParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalParameters;
-(void)setUrlForContext:(NSURL *)arg1 ;
-(NSURL *)urlForContext;
-(NSString *)urlEndpoint;
-(void)setUrlEndpoint:(NSString *)arg1 ;
@end

