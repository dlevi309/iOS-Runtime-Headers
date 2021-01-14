/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString, ASResolveRecipientsCertificatesItem, ASResolveRecipientsAvailabilityItem;

@interface ASResolveRecipientsSingleRecipientItem : ASItem {

	NSString* _emailAddress;
	ASResolveRecipientsCertificatesItem* _certificates;
	ASResolveRecipientsAvailabilityItem* _availability;

}

@property (nonatomic,retain) NSString * emailAddress;                                         //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) ASResolveRecipientsCertificatesItem * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) ASResolveRecipientsAvailabilityItem * availability;              //@synthesize availability=_availability - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(ASResolveRecipientsCertificatesItem *)certificates;
-(id)description;
-(ASResolveRecipientsAvailabilityItem *)availability;
-(void)setAvailability:(ASResolveRecipientsAvailabilityItem *)arg1 ;
-(void)setCertificates:(ASResolveRecipientsCertificatesItem *)arg1 ;
@end

