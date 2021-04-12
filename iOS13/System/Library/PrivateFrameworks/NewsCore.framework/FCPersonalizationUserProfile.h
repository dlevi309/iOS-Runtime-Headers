/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, FCBundleSubscription;

@interface FCPersonalizationUserProfile : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _subscribedTagIDs;
	NSSet* _mutedTagIDs;
	NSSet* _autofavoritedTagIDs;
	NSSet* _purchasedTagIDs;
	NSSet* _readArticleIDs;
	NSSet* _seenArticleIDs;
	FCBundleSubscription* _bundleSubscription;

}

@property (nonatomic,copy,readonly) NSSet * subscribedTagIDs;                          //@synthesize subscribedTagIDs=_subscribedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs;                               //@synthesize mutedTagIDs=_mutedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * autofavoritedTagIDs;                       //@synthesize autofavoritedTagIDs=_autofavoritedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs;                           //@synthesize purchasedTagIDs=_purchasedTagIDs - In the implementation block
@property (nonatomic,readonly) NSSet * readArticleIDs;                                 //@synthesize readArticleIDs=_readArticleIDs - In the implementation block
@property (nonatomic,readonly) NSSet * seenArticleIDs;                                 //@synthesize seenArticleIDs=_seenArticleIDs - In the implementation block
@property (nonatomic,readonly) FCBundleSubscription * bundleSubscription;              //@synthesize bundleSubscription=_bundleSubscription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)mutedTagIDs;
-(NSSet *)purchasedTagIDs;
-(FCBundleSubscription *)bundleSubscription;
-(NSSet *)subscribedTagIDs;
-(id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 autofavoritedTagIDs:(id)arg3 purchasedTagIDs:(id)arg4 readArticleIDs:(id)arg5 seenArticleIDs:(id)arg6 bundleSubscription:(id)arg7 ;
-(NSSet *)autofavoritedTagIDs;
-(NSSet *)readArticleIDs;
-(NSSet *)seenArticleIDs;
-(id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 autofavoritedTagIDs:(id)arg3 purchasedTagIDs:(id)arg4 bundleSubscription:(id)arg5 ;
@end

