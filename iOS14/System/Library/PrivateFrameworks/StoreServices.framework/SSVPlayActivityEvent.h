/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SSVPlayActivityEventContainerIDs, SSVPlayActivityEnqueuerProperties, NSDate, NSTimeZone, SSVPlayActivityEventItemIDs, NSNumber, NSData;

@interface SSVPlayActivityEvent : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _buildVersion;
	NSString* _containerID;
	SSVPlayActivityEventContainerIDs* _containerIDs;
	unsigned long long _containerType;
	NSString* _deviceName;
	unsigned long long _displayType;
	unsigned long long _endReasonType;
	SSVPlayActivityEnqueuerProperties* _enqueuerProperties;
	NSDate* _eventDate;
	NSTimeZone* _eventTimeZone;
	unsigned long long _eventType;
	NSString* _externalID;
	NSString* _featureName;
	NSString* _householdID;
	SSVPlayActivityEventItemIDs* _itemIDs;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	unsigned long long _itemType;
	unsigned long long _lyricsDisplayedCharacterCount;
	NSString* _lyricsLanguage;
	unsigned long long _mediaType;
	BOOL _offline;
	long long _persistentID;
	NSString* _personalizedContainerID;
	NSNumber* _privateListeningEnabled;
	unsigned long long _reasonHintType;
	NSData* _recommendationData;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	BOOL _SBEnabled;
	NSNumber* _siriInitiated;
	unsigned long long _sourceType;
	long long _systemReleaseType;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	long long _version;

}

@property (nonatomic,readonly) long long version;                                                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                                                          //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityEventContainerIDs * containerIDs;                                  //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long containerType;                                                      //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,copy,readonly) NSString * deviceName;                                                            //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;                                                        //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) unsigned long long endReasonType;                                                      //@synthesize endReasonType=_endReasonType - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityEnqueuerProperties * enqueuerProperties;                           //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventDate;                                                               //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                                                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * eventTimeZone;                                                       //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                                           //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * householdID;                                                           //@synthesize householdID=_householdID - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityEventItemIDs * itemIDs;                                            //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,readonly) double itemDuration;                                                                   //@synthesize itemDuration=_itemDuration - In the implementation block
@property (nonatomic,readonly) double itemEndTime;                                                                    //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (nonatomic,readonly) double itemStartTime;                                                                  //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType;                                                           //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) unsigned long long lyricsDisplayedCharacterCount;                                      //@synthesize lyricsDisplayedCharacterCount=_lyricsDisplayedCharacterCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * lyricsLanguage;                                                        //@synthesize lyricsLanguage=_lyricsLanguage - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;                                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (getter=isOffline,nonatomic,readonly) BOOL offline;                                                         //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) long long persistentID; 
@property (getter=isPrivateListeningEnabled,nonatomic,copy,readonly) NSNumber * privateListeningEnabled;              //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long reasonHintType;                                                     //@synthesize reasonHintType=_reasonHintType - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;                                                      //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;                                            //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                                               //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (setter=BEnabled,getter=isSBEnabled,nonatomic,readonly) BOOL SBEnabled;                                     //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (getter=isSiriInitiated,nonatomic,copy,readonly) NSNumber * siriInitiated;                                  //@synthesize siriInitiated=_siriInitiated - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                                         //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                                                     //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontID;                                                          //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,readonly) long long systemReleaseType;                                                           //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (nonatomic,copy,readonly) NSData * timedMetadata;                                                           //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSData * trackInfo;                                                               //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerID;                                                           //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                                                            //@synthesize externalID=_externalID - In the implementation block
@property (getter=isInternalBuild,nonatomic,readonly) BOOL internalBuild; 
@property (nonatomic,copy,readonly) NSString * personalizedContainerID;                                               //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                                                               //@synthesize storeID=_storeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)storeID;
-(NSString *)deviceName;
-(unsigned long long)sourceType;
-(unsigned long long)eventType;
-(NSData *)dataRepresentation;
-(NSString *)requestingBundleIdentifier;
-(NSString *)containerID;
-(NSString *)requestingBundleVersion;
-(unsigned long long)mediaType;
-(id)init;
-(id)isPrivateListeningEnabled;
-(unsigned long long)displayType;
-(BOOL)isOffline;
-(SSVPlayActivityEventItemIDs *)itemIDs;
-(SSVPlayActivityEnqueuerProperties *)enqueuerProperties;
-(NSTimeZone *)eventTimeZone;
-(double)itemEndTime;
-(unsigned long long)lyricsDisplayedCharacterCount;
-(NSString *)lyricsLanguage;
-(double)itemDuration;
-(NSData *)recommendationData;
-(double)itemStartTime;
-(NSString *)householdID;
-(id)isSiriInitiated;
-(NSString *)personalizedContainerID;
-(unsigned long long)reasonHintType;
-(NSString *)externalID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(unsigned long long)storeAccountID;
-(NSData *)timedMetadata;
-(id)description;
-(NSDate *)eventDate;
-(unsigned long long)itemType;
-(BOOL)isInternalBuild;
-(BOOL)isSBEnabled;
-(long long)persistentID;
-(NSString *)storeFrontID;
-(NSString *)buildVersion;
-(long long)systemReleaseType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)containerType;
-(Class)_mutableCopyClass;
-(NSString *)featureName;
-(unsigned long long)endReasonType;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSVPlayActivityEventContainerIDs *)containerIDs;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)trackInfo;
@end

