/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKDiscoveryCard, NSArray, PKDiscoveryCallToAction;

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding> {

	BOOL _requestedBadge;
	NSString* _itemIdentifier;
	long long _version;
	long long _variant;
	PKDiscoveryCard* _card;
	NSArray* _shelves;
	PKDiscoveryCallToAction* _footerLockup;
	long long _priority;
	/*^block*/id _actionOnDismiss;

}

@property (nonatomic,retain) NSString * itemIdentifier;                                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long priority;                                          //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long variant;                                         //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCard * card;                                    //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * shelves;                                         //@synthesize shelves=_shelves - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCallToAction * footerLockup;                    //@synthesize footerLockup=_footerLockup - In the implementation block
@property (nonatomic,copy) id actionOnDismiss;                                            //@synthesize actionOnDismiss=_actionOnDismiss - In the implementation block
@property (getter=hasRequestedBadge,nonatomic,readonly) BOOL requestedBadge;              //@synthesize requestedBadge=_requestedBadge - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(long long)version;
-(long long)variant;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(PKDiscoveryCard *)card;
-(void)setActionOnDismiss:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(BOOL)isEqualForUI:(id)arg1 ;
-(void)setForItem:(id)arg1 ;
-(NSArray *)shelves;
-(PKDiscoveryCallToAction *)footerLockup;
-(id)actionOnDismiss;
-(BOOL)hasRequestedBadge;
@end

