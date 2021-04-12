/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	AKAppleIDAuthenticationContext* _authContext;

}

@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,copy) NSURL * urlForContext;                                       //@synthesize urlForContext=_urlForContext - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authContext;              //@synthesize authContext=_authContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventType;                               //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * clientName;                                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                   //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalParameters;                         //@synthesize additionalParameters=_additionalParameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithData:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSString *)clientName;
-(NSString *)eventType;
-(id)initWithEventType:(id)arg1 ;
-(void)setAdditionalParameters:(NSDictionary *)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(AKAppleIDAuthenticationContext *)authContext;
-(void)setAuthContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSDictionary *)additionalParameters;
-(void)setUrlForContext:(NSURL *)arg1 ;
-(NSURL *)urlForContext;
@end

