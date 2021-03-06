/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCSLinkItemDescribing.h>
#import <libobjc.A.dylib/BCSItemIdentifying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, BCSLinkItemIdentifier, NSDictionary, NSNumber, NSArray, NSObject;

@interface BCSLinkItemModel : NSObject <BSDescriptionProviding, BCSLinkItemDescribing, BCSItemIdentifying, NSCopying, NSSecureCoding> {

	NSURL* _linkURL;
	NSString* _bundleID;
	NSString* _heroImageURLString;
	NSString* _iconImageURLString;
	NSURL* _redirectURL;
	long long _action;
	BCSLinkItemIdentifier* _itemIdentifier;
	BOOL _isPoweredBy;
	NSDictionary* _mapIconStyleAttributes;
	NSNumber* _mapItemMUID;
	NSArray* _businessLinkContentItemModels;

}

@property (getter=_linkItemIdentifier,nonatomic,readonly) BCSLinkItemIdentifier * linkItemIdentifier; 
@property (nonatomic,retain) NSArray * businessLinkContentItemModels;                                              //@synthesize businessLinkContentItemModels=_businessLinkContentItemModels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSURL * linkURL;                                                             //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullHash; 
@property (nonatomic,copy,readonly) NSString * bundleID;                                                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain,readonly) NSString * heroImageURLString;                                               //@synthesize heroImageURLString=_heroImageURLString - In the implementation block
@property (nonatomic,retain,readonly) NSString * iconImageURLString;                                               //@synthesize iconImageURLString=_iconImageURLString - In the implementation block
@property (nonatomic,retain,readonly) NSURL * redirectURL;                                                         //@synthesize redirectURL=_redirectURL - In the implementation block
@property (nonatomic,readonly) long long action;                                                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL isPoweredBy;                                                                   //@synthesize isPoweredBy=_isPoweredBy - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * mapIconStyleAttributes;                                       //@synthesize mapIconStyleAttributes=_mapIconStyleAttributes - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * mapItemMUID;                                                      //@synthesize mapItemMUID=_mapItemMUID - In the implementation block
@property (nonatomic,readonly) NSObject * itemIdentifier; 
@property (nonatomic,readonly) long long truncatedHash; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)linkItemModelsFromLinkJSONObj:(id)arg1 ;
+(id)linkItemModelsFromRecords:(id)arg1 ;
-(id)succinctDescription;
-(NSObject *)itemIdentifier;
-(NSURL *)linkURL;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)action;
-(NSString *)description;
-(NSString *)bundleID;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)redirectURL;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPoweredBy;
-(NSString *)fullHash;
-(NSDictionary *)mapIconStyleAttributes;
-(NSNumber *)mapItemMUID;
-(long long)truncatedHash;
-(BOOL)matchesItemIdentifying:(id)arg1 ;
-(id)initWithLinkURL:(id)arg1 bundleID:(id)arg2 heroImageURLString:(id)arg3 iconImageURLString:(id)arg4 redirectURL:(id)arg5 action:(long long)arg6 mapIconStyleAttributes:(id)arg7 mapItemMUID:(id)arg8 businessLinkContentItemModels:(id)arg9 isPoweredBy:(BOOL)arg10 ;
-(NSArray *)businessLinkContentItemModels;
-(NSString *)heroImageURLString;
-(NSString *)iconImageURLString;
-(id)initWithLinkMessage:(id)arg1 bucketID:(id)arg2 ;
-(id)_linkItemIdentifier;
-(void)setBusinessLinkContentItemModels:(NSArray *)arg1 ;
@end

