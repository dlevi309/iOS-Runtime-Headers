/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding> {

	NSString* _assertionID;
	RPCompanionLinkClient* _client;
	NSString* _destinationID;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
@property (nonatomic,retain) RPCompanionLinkClient * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * destinationID;                      //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAssertionID:(NSString *)arg1 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(id)description;
-(NSString *)assertionID;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

