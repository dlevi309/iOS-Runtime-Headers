/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(void)setAssertionID:(NSString *)arg1 ;
-(NSString *)assertionID;
@end

