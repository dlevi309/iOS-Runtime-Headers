/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSString, NSDate;

@interface PKCloudStoreZoneInvitation : NSObject <NSSecureCoding> {

	NSURL* _shareURL;
	NSData* _shareInvitationToken;
	NSString* _containerIdentifier;
	NSString* _zoneName;
	NSDate* _dateCreated;

}

@property (nonatomic,retain) NSURL * shareURL;                           //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) NSData * shareInvitationToken;              //@synthesize shareInvitationToken=_shareInvitationToken - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;               //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                          //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) NSDate * dateCreated;                         //@synthesize dateCreated=_dateCreated - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cloudStoreZoneInvitationWithProtobuf:(id)arg1 ;
-(NSURL *)shareURL;
-(NSDate *)dateCreated;
-(NSString *)zoneName;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToCloudStoreZoneInvitation:(id)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)description;
-(id)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)shareInvitationToken;
-(void)setShareInvitationToken:(NSData *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

