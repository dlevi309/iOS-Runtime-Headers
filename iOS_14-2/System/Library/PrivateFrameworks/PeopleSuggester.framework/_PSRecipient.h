/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface _PSRecipient : NSObject <NSSecureCoding> {

	BOOL _familyHeuristic;
	NSString* _identifier;
	NSString* _handle;
	NSString* _displayName;
	CNContact* _contact;
	NSString* _senderHandle;
	NSString* _mostRecentTransportBundleId;

}

@property (nonatomic,copy) NSString * senderHandle;                             //@synthesize senderHandle=_senderHandle - In the implementation block
@property (assign,nonatomic) BOOL familyHeuristic;                              //@synthesize familyHeuristic=_familyHeuristic - In the implementation block
@property (nonatomic,copy) NSString * mostRecentTransportBundleId;              //@synthesize mostRecentTransportBundleId=_mostRecentTransportBundleId - In the implementation block
@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * handle;                                   //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) CNContact * contact;                               //@synthesize contact=_contact - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recipientForINPerson:(id)arg1 contactResolver:(id)arg2 ;
-(void)setHandle:(NSString *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)handle;
-(NSString *)senderHandle;
-(void)setMostRecentTransportBundleId:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5 mostRecentTransportBundleId:(id)arg6 ;
-(NSString *)mostRecentTransportBundleId;
-(id)description;
-(void)setSenderHandle:(NSString *)arg1 ;
-(void)setFamilyHeuristic:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)familyHeuristic;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3 mostRecentTransportBundleId:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3 ;
@end

