/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol REDonatedActionIdentifierProviding;
@class NSDate, REIdentifier, NSString, _DKEvent, NSArray;

@interface REDonatedAction : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isIntentBacked;
	BOOL _localDonation;
	unsigned long long _type;
	NSDate* _creationDate;
	NSDate* _localSaveDate;
	REIdentifier* _donationIdentifier;
	id<REDonatedActionIdentifierProviding> _actionTypeIdentifier;
	id<REDonatedActionIdentifierProviding> _simplifiedActionTypeIdentifier;
	NSString* _eventLevelIdentifier;
	NSString* _appLevelIdentifier;
	unsigned long long _filteredShortcutType;
	_DKEvent* _event;
	unsigned long long _relevanceProvidersHash;
	NSArray* _relevanceProviders;
	NSString* _intentTypeName;
	NSString* _activityType;

}

@property (nonatomic,readonly) unsigned long long type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSDate * creationDate;                                                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * localSaveDate;                                                             //@synthesize localSaveDate=_localSaveDate - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) REIdentifier * donationIdentifier;                                                  //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> actionTypeIdentifier;                        //@synthesize actionTypeIdentifier=_actionTypeIdentifier - In the implementation block
@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> simplifiedActionTypeIdentifier;              //@synthesize simplifiedActionTypeIdentifier=_simplifiedActionTypeIdentifier - In the implementation block
@property (getter=isLocalDonation,nonatomic,readonly) BOOL localDonation;                                          //@synthesize localDonation=_localDonation - In the implementation block
@property (nonatomic,readonly) NSString * eventLevelIdentifier;                                                    //@synthesize eventLevelIdentifier=_eventLevelIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appLevelIdentifier;                                                      //@synthesize appLevelIdentifier=_appLevelIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long filteredShortcutType;                                            //@synthesize filteredShortcutType=_filteredShortcutType - In the implementation block
@property (nonatomic,retain) _DKEvent * event;                                                                     //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceProvidersHash;                                          //@synthesize relevanceProvidersHash=_relevanceProvidersHash - In the implementation block
@property (nonatomic,readonly) NSArray * relevanceProviders;                                                       //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,readonly) NSString * intentTypeName;                                                          //@synthesize intentTypeName=_intentTypeName - In the implementation block
@property (nonatomic,readonly) NSString * activityType;                                                            //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * remoteBundleIdentifier; 
@property (nonatomic,readonly) NSString * localBundleIdentifier; 
@property (nonatomic,readonly) unsigned long long trainingActionIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)bundleIdForExtensionId:(id)arg1 ;
+(BOOL)supportedActivityType:(id)arg1 forBundleID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(NSDate *)creationDate;
-(_DKEvent *)event;
-(void)setEvent:(_DKEvent *)arg1 ;
-(NSArray *)relevanceProviders;
-(REIdentifier *)donationIdentifier;
-(NSString *)intentTypeName;
-(id)initWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(NSDate *)localSaveDate;
-(id<REDonatedActionIdentifierProviding>)simplifiedActionTypeIdentifier;
-(id<REDonatedActionIdentifierProviding>)actionTypeIdentifier;
-(unsigned long long)relevanceProvidersHash;
-(unsigned long long)trainingActionIdentifier;
-(unsigned long long)filteredShortcutType;
-(NSString *)eventLevelIdentifier;
-(NSString *)appLevelIdentifier;
-(id)_initInteractionWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(id)_initUserActivityWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(id)_initRelevantShortcutWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(void)_loadShortcutIdentifiersFromIntent:(id)arg1 ;
-(void)_loadShortcutIdentifiersFromUserActivity:(id)arg1 ;
-(unsigned long long)_hashRelevanceProviders:(id)arg1 ;
-(id)_shortcutFilter;
-(BOOL)isLocalDonation;
-(NSString *)remoteBundleIdentifier;
-(NSString *)localBundleIdentifier;
-(id)generateMetrics;
-(void)_loadDuetEvent:(/*^block*/id)arg1 ;
-(void)loadUserActivity:(/*^block*/id)arg1 ;
-(void)loadIntent:(/*^block*/id)arg1 ;
-(void)loadRelevantShortcut:(/*^block*/id)arg1 ;
@end

