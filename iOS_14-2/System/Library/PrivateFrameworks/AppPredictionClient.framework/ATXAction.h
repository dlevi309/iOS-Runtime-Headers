/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/CRContent.h>
#import <libobjc.A.dylib/ATXLazyIntentDelegateProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/ATXSuggestionExecutableProtocol.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/ATXMemoryPressureObserver.h>

@class NSUserActivity, UAUserActivityProxy, NSString, ATXActionCriteria, ATXLazyIntent, NSUUID, NSDictionary, CSSearchableItemAttributeSet, ATXAVRouteInfo, INIntent;

@interface ATXAction : NSObject <CRContent, ATXLazyIntentDelegateProtocol, NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver> {

	NSUserActivity* _userActivity;
	UAUserActivityProxy* _userActivityProxy;
	unsigned long long _userActivityHash;
	NSString* _title;
	NSString* _subtitle;
	NSString* _languageCode;
	ATXActionCriteria* _criteria;
	ATXLazyIntent* _lazyIntent;
	BOOL _isTVWhiteListedLongFormMediaDoNotUseDirectly;
	BOOL _isFutureMedia;
	NSString* _bundleId;
	unsigned long long _actionType;
	NSUUID* _actionUUID;
	NSString* _itemIdentifier;
	NSString* _heuristic;
	NSDictionary* _heuristicMetadata;
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
@property (nonatomic,readonly) BOOL isTVWhiteListedLongFormMedia;                               //@synthesize isTVWhiteListedLongFormMediaDoNotUseDirectly=_isTVWhiteListedLongFormMediaDoNotUseDirectly - In the implementation block
@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,readonly) UAUserActivityProxy * userActivityProxy;                         //@synthesize userActivityProxy=_userActivityProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2 ;
+(id)getActionKeyForBundleId:(id)arg1 actionType:(id)arg2 ;
+(unsigned long long)_userActivityHashForUserInfoDict:(id)arg1 activityType:(id)arg2 webpageURL:(id)arg3 ;
+(id)getDateFromUserActivityString:(id)arg1 forActionKey:(id)arg2 ;
+(id)unarchivedActionFromData:(id)arg1 ;
+(id)getNSUATypefromActivityType:(id)arg1 ;
+(BOOL)_isTVIntent:(id)arg1 bundleId:(id)arg2 ;
-(void)setHeuristic:(NSString *)arg1 ;
-(id)_title;
-(NSUserActivity *)userActivity;
-(id)initWithProto:(id)arg1 ;
-(NSString *)heuristic;
-(INIntent *)intent;
-(BOOL)isFutureMedia;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)isEqualToAction:(id)arg1 ;
-(NSString *)itemIdentifier;
-(unsigned long long)actionType;
-(void)setCriteria:(ATXActionCriteria *)arg1 ;
-(id)json;
-(id)proto;
-(id)dateForAction;
-(UAUserActivityProxy *)userActivityProxy;
-(id)init;
-(id)encodeAsProto;
-(void)setTitleForSerializationToCache;
-(void)didDeserializeIntent:(id)arg1 ;
-(id)initFromBestAppSuggestion:(id)arg1 activity:(id)arg2 actionUUID:(id)arg3 bundleId:(id)arg4 contentAttributeSet:(id)arg5 itemIdentifier:(id)arg6 heuristic:(id)arg7 heuristicMetadata:(id)arg8 criteria:(id)arg9 isFutureMedia:(BOOL)arg10 title:(id)arg11 subtitle:(id)arg12 ;
-(id)actionWithRouteInfo:(id)arg1 ;
-(id)actionDescription;
-(id)underlyingInteraction;
-(NSString *)bundleId;
-(BOOL)hasActionTitle;
-(id)initWithNSUserActivityString:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 isFutureMedia:(BOOL)arg8 title:(id)arg9 subtitle:(id)arg10 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithCoder:(id)arg1 ;
-(void)setSubtitleForSerializationToCache;
-(void)_setUserActivityHash:(unsigned long long)arg1 ;
-(id)actionKey;
-(id)initWithIntent:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 heuristic:(id)arg4 heuristicMetadata:(id)arg5 criteria:(id)arg6 isFutureMedia:(BOOL)arg7 title:(id)arg8 subtitle:(id)arg9 ;
-(id)actionTitle;
-(ATXAVRouteInfo *)routeInfo;
-(unsigned long long)hashSlotSetWithNonNilParameters:(id)arg1 ;
-(void)setLaunchIdForIntent:(id)arg1 ;
-(NSDictionary *)heuristicMetadata;
-(CSSearchableItemAttributeSet *)contentAttributeSet;
-(NSString *)description;
-(id)_bundleIdForDisplay;
-(NSString *)userActivityString;
-(id)_spotlightContentType;
-(unsigned long long)userActivityHash;
-(id)initWithActivityProxy:(id)arg1 activity:(id)arg2 activityString:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 intent:(id)arg6 actionUUID:(id)arg7 bundleId:(id)arg8 type:(unsigned long long)arg9 heuristic:(id)arg10 heuristicMetadata:(id)arg11 criteria:(id)arg12 isFutureMedia:(BOOL)arg13 routeInfo:(id)arg14 title:(id)arg15 subtitle:(id)arg16 languageCode:(id)arg17 ;
-(id)actionSubtitle;
-(ATXActionCriteria *)criteria;
-(id)archivedDataForAction;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldUseCachedTitle:(id)arg1 cachedLanguageCode:(id)arg2 ;
-(BOOL)isHeuristic;
-(NSUUID *)actionUUID;
-(id)copyWithParameterWhitelist:(id)arg1 ;
-(id)predictionTypeStringForPET;
-(id)_subtitle;
-(BOOL)isTVWhiteListedLongFormMedia;
-(id)initWithNSUserActivity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 criteria:(id)arg8 isFutureMedia:(BOOL)arg9 title:(id)arg10 subtitle:(id)arg11 ;
-(void)handleMemoryPressure;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isTVAction;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

