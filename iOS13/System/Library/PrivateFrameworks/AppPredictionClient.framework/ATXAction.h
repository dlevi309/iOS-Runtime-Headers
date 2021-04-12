/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/CRContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUserActivity, NSString, ATXActionCriteria, NSUUID, NSDictionary, INIntent, CSSearchableItemAttributeSet, ATXAVRouteInfo;

@interface ATXAction : NSObject <CRContent, NSSecureCoding, NSCopying> {

	NSUserActivity* _userActivity;
	unsigned long long _userActivityHash;
	NSString* _title;
	NSString* _subtitle;
	NSString* _languageCode;
	ATXActionCriteria* _criteria;
	BOOL _isFutureMedia;
	BOOL _isTVWhiteListedLongFormMedia;
	NSString* _bundleId;
	unsigned long long _actionType;
	NSUUID* _actionUUID;
	NSString* _itemIdentifier;
	NSString* _heuristic;
	NSDictionary* _heuristicMetadata;
	INIntent* _intent;
	NSString* _userActivityString;
	CSSearchableItemAttributeSet* _contentAttributeSet;
	ATXAVRouteInfo* _routeInfo;

}

@property (nonatomic,readonly) NSString * userActivityString;                                   //@synthesize userActivityString=_userActivityString - In the implementation block
@property (nonatomic,readonly) CSSearchableItemAttributeSet * contentAttributeSet;              //@synthesize contentAttributeSet=_contentAttributeSet - In the implementation block
@property (nonatomic,readonly) ATXAVRouteInfo * routeInfo;                                      //@synthesize routeInfo=_routeInfo - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                             //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) unsigned long long actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) ATXActionCriteria * criteria; 
@property (nonatomic,readonly) NSUUID * actionUUID;                                             //@synthesize actionUUID=_actionUUID - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                                       //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * heuristic;                                            //@synthesize heuristic=_heuristic - In the implementation block
@property (nonatomic,readonly) NSDictionary * heuristicMetadata;                                //@synthesize heuristicMetadata=_heuristicMetadata - In the implementation block
@property (nonatomic,readonly) BOOL isHeuristic; 
@property (nonatomic,readonly) BOOL isFutureMedia;                                              //@synthesize isFutureMedia=_isFutureMedia - In the implementation block
@property (nonatomic,readonly) BOOL isTVWhiteListedLongFormMedia;                               //@synthesize isTVWhiteListedLongFormMedia=_isTVWhiteListedLongFormMedia - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                               //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)getActionKeyForBundleId:(id)arg1 actionType:(id)arg2 ;
+(id)getNSUATypefromActivityType:(id)arg1 ;
+(id)getDateFromUserActivityString:(id)arg1 forActionKey:(id)arg2 ;
+(unsigned long long)_userActivityHashForUserInfoDict:(id)arg1 activityType:(id)arg2 webpageURL:(id)arg3 ;
+(BOOL)_isTVWhiteListedLongFormMediaIntent:(id)arg1 bundleId:(id)arg2 ;
+(BOOL)_isTVIntent:(id)arg1 bundleId:(id)arg2 ;
+(id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(CSSearchableItemAttributeSet *)contentAttributeSet;
-(NSString *)bundleId;
-(INIntent *)intent;
-(NSUserActivity *)userActivity;
-(unsigned long long)actionType;
-(ATXAVRouteInfo *)routeInfo;
-(id)_spotlightContentType;
-(ATXActionCriteria *)criteria;
-(void)setCriteria:(ATXActionCriteria *)arg1 ;
-(id)actionDescription;
-(NSString *)userActivityString;
-(id)json;
-(id)underlyingInteraction;
-(id)initWithIntent:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 heuristic:(id)arg4 heuristicMetadata:(id)arg5 criteria:(id)arg6 isFutureMedia:(BOOL)arg7 title:(id)arg8 subtitle:(id)arg9 ;
-(id)initWithNSUserActivity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 criteria:(id)arg8 isFutureMedia:(BOOL)arg9 title:(id)arg10 subtitle:(id)arg11 ;
-(id)initWithNSUserActivityString:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 isFutureMedia:(BOOL)arg8 title:(id)arg9 subtitle:(id)arg10 ;
-(id)initWithActivity:(id)arg1 activityString:(id)arg2 itemIdentifier:(id)arg3 contentAttributeSet:(id)arg4 intent:(id)arg5 actionUUID:(id)arg6 bundleId:(id)arg7 type:(unsigned long long)arg8 heuristic:(id)arg9 heuristicMetadata:(id)arg10 criteria:(id)arg11 isFutureMedia:(BOOL)arg12 routeInfo:(id)arg13 title:(id)arg14 subtitle:(id)arg15 languageCode:(id)arg16 ;
-(id)actionWithRouteInfo:(id)arg1 ;
-(BOOL)isEqualToAction:(id)arg1 ;
-(unsigned long long)userActivityHash;
-(BOOL)isHeuristic;
-(BOOL)_shouldUseCachedTitle:(id)arg1 cachedLanguageCode:(id)arg2 ;
-(void)setTitleForSerializationToCache;
-(void)setSubtitleForSerializationToCache;
-(id)actionTitle;
-(BOOL)hasActionTitle;
-(id)actionSubtitle;
-(id)dateForAction;
-(id)actionKey;
-(id)copyWithParameterWhitelist:(id)arg1 ;
-(void)setHeuristic:(NSString *)arg1 ;
-(id)predictionTypeStringForPET;
-(id)_bundleIdForDisplay;
-(NSUUID *)actionUUID;
-(NSString *)heuristic;
-(NSDictionary *)heuristicMetadata;
-(BOOL)isFutureMedia;
-(BOOL)isTVWhiteListedLongFormMedia;
-(BOOL)isTVAction;
@end

