/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <BusinessChatService/BCSItem.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCSLinkItemDescribing.h>
#import <libobjc.A.dylib/BCSBusinessLinkContentItemDescribing.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BCSLocaleHelperProtocol;
@class NSURL, NSString, NSDictionary, NSNumber, BCSLinkItemModel, BCSBusinessLinkContentItem;

@interface BCSLinkItem : BCSItem <BSDescriptionProviding, BCSLinkItemDescribing, BCSBusinessLinkContentItemDescribing, NSCopying> {

	BCSLinkItemModel* _model;
	id<BCSLocaleHelperProtocol> _localeHelper;
	NSString* _cachedContentItemLanguage;
	BCSBusinessLinkContentItem* _cachedContentItem;

}

@property (nonatomic,retain,readonly) NSURL * heroImageURL; 
@property (nonatomic,retain,readonly) NSURL * iconImageURL; 
@property (nonatomic,retain) NSString * cachedContentItemLanguage;                                //@synthesize cachedContentItemLanguage=_cachedContentItemLanguage - In the implementation block
@property (nonatomic,retain) BCSBusinessLinkContentItem * cachedContentItem;                      //@synthesize cachedContentItem=_cachedContentItem - In the implementation block
@property (nonatomic,readonly) id<BCSLocaleHelperProtocol> localeHelper;                          //@synthesize localeHelper=_localeHelper - In the implementation block
@property (nonatomic,readonly) BCSLinkItemModel * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,retain,readonly) NSURL * linkURL; 
@property (nonatomic,copy,readonly) NSString * fullHash; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSURL * redirectURL; 
@property (nonatomic,readonly) long long action; 
@property (nonatomic,readonly) BOOL isPoweredBy; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) BCSBusinessLinkContentItem * businessLinkContentItem; 
@property (nonatomic,retain,readonly) NSDictionary * mapIconStyleAttributes; 
@property (nonatomic,retain,readonly) NSNumber * mapItemMUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * heroImageURLString; 
@property (nonatomic,retain,readonly) NSString * iconImageURLString; 
+(id)linkItemsFromLinkItemModels:(id)arg1 ;
-(id)succinctDescription;
-(id)itemIdentifier;
-(BCSLinkItemModel *)model;
-(NSURL *)linkURL;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)subtitle;
-(NSString *)debugDescription;
-(long long)action;
-(NSString *)description;
-(NSURL *)iconImageURL;
-(NSString *)bundleID;
-(long long)type;
-(NSURL *)redirectURL;
-(NSURL *)heroImageURL;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(NSString *)title;
-(BOOL)isPoweredBy;
-(id)heroImageURLForSpecifier:(SCD_Struct_BC8)arg1 ;
-(NSString *)fullHash;
-(NSDictionary *)mapIconStyleAttributes;
-(NSNumber *)mapItemMUID;
-(long long)truncatedHash;
-(BOOL)matchesItemIdentifying:(id)arg1 ;
-(id)initWithLinkItemModel:(id)arg1 expirationDate:(id)arg2 localeHelper:(id)arg3 ;
-(NSString *)heroImageURLString;
-(NSString *)iconImageURLString;
-(id)initWithLinkItemModel:(id)arg1 localeHelper:(id)arg2 ;
-(id<BCSLocaleHelperProtocol>)localeHelper;
-(NSString *)cachedContentItemLanguage;
-(BCSBusinessLinkContentItem *)cachedContentItem;
-(id)_businessLinkContentItems;
-(void)setCachedContentItem:(BCSBusinessLinkContentItem *)arg1 ;
-(void)setCachedContentItemLanguage:(NSString *)arg1 ;
-(BCSBusinessLinkContentItem *)businessLinkContentItem;
-(id)iconImageURLForSpecifier:(SCD_Struct_BC8)arg1 ;
@end

