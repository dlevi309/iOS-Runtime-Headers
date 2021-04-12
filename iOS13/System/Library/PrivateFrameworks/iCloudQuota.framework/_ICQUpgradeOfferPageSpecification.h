/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/

#import <iCloudQuota/_ICQPageSpecification.h>

@class NSDictionary, NSString, NSArray, ICQLink;

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification {

	NSDictionary* _serverDict;
	NSString* _iconBundleIdentifier;
	NSString* _title;
	NSString* _message;
	NSArray* _messageLinks;
	NSString* _altMessage;
	NSArray* _altMessageLinks;
	ICQLink* _purchaseLink;
	ICQLink* _purchase2Link;
	ICQLink* _bottomLink;
	NSString* _fineprintFormat;
	NSArray* _fineprintLinks;
	NSString* _purchase2LinkVisibleKey;
	NSString* _bottomLinkVisibleKey;

}

@property (nonatomic,readonly) NSDictionary * serverDict;                     //@synthesize serverDict=_serverDict - In the implementation block
@property (nonatomic,retain) NSString * iconBundleIdentifier;                 //@synthesize iconBundleIdentifier=_iconBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSArray * messageLinks;                          //@synthesize messageLinks=_messageLinks - In the implementation block
@property (nonatomic,retain) NSString * altMessage;                           //@synthesize altMessage=_altMessage - In the implementation block
@property (nonatomic,retain) NSArray * altMessageLinks;                       //@synthesize altMessageLinks=_altMessageLinks - In the implementation block
@property (nonatomic,retain) ICQLink * purchaseLink;                          //@synthesize purchaseLink=_purchaseLink - In the implementation block
@property (nonatomic,retain) ICQLink * purchase2Link;                         //@synthesize purchase2Link=_purchase2Link - In the implementation block
@property (nonatomic,retain) ICQLink * bottomLink;                            //@synthesize bottomLink=_bottomLink - In the implementation block
@property (nonatomic,retain) NSString * fineprintFormat;                      //@synthesize fineprintFormat=_fineprintFormat - In the implementation block
@property (nonatomic,retain) NSArray * fineprintLinks;                        //@synthesize fineprintLinks=_fineprintLinks - In the implementation block
@property (nonatomic,retain) NSString * purchase2LinkVisibleKey;              //@synthesize purchase2LinkVisibleKey=_purchase2LinkVisibleKey - In the implementation block
@property (nonatomic,retain) NSString * bottomLinkVisibleKey;                 //@synthesize bottomLinkVisibleKey=_bottomLinkVisibleKey - In the implementation block
+(id)upgradeOfferPageSpecificationSampleForLevel:(long long)arg1 ;
-(id)debugDescription;
-(id)copy;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)messageLinks;
-(void)setMessageLinks:(NSArray *)arg1 ;
-(void)setAltMessage:(NSString *)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDict;
-(NSString *)altMessage;
-(void)setBottomLink:(ICQLink *)arg1 ;
-(ICQLink *)bottomLink;
-(id)initWithServerDictionary:(id)arg1 pageIdentifier:(id)arg2 ;
-(void)setIconBundleIdentifier:(NSString *)arg1 ;
-(void)setAltMessageLinks:(NSArray *)arg1 ;
-(void)setFineprintFormat:(NSString *)arg1 ;
-(void)setFineprintLinks:(NSArray *)arg1 ;
-(void)setPurchaseLink:(ICQLink *)arg1 ;
-(void)setPurchase2Link:(ICQLink *)arg1 ;
-(void)setPurchase2LinkVisibleKey:(NSString *)arg1 ;
-(void)setBottomLinkVisibleKey:(NSString *)arg1 ;
-(ICQLink *)purchaseLink;
-(ICQLink *)purchase2Link;
-(NSString *)fineprintFormat;
-(NSString *)purchase2LinkVisibleKey;
-(NSString *)bottomLinkVisibleKey;
-(id)copyWithBindings:(id)arg1 ;
-(NSString *)iconBundleIdentifier;
-(NSArray *)altMessageLinks;
-(NSArray *)fineprintLinks;
@end

