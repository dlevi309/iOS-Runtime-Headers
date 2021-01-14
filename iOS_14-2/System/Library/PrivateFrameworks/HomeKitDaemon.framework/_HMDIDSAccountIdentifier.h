/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier {

	NSString* _identifierString;

}

@property (copy,readonly) NSString * identifierString;              //@synthesize identifierString=_identifierString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)namespace;
-(BOOL)isAuthenticated;
-(void)encodeWithCoder:(id)arg1 ;
-(id)senderCorrelationIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifierString;
-(id)initWithIdentifierString:(id)arg1 ;
@end

