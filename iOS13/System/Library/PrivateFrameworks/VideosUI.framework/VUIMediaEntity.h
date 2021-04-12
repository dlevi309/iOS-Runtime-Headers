/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIMediaEntityIdentifierInternal;
@class VUIMediaLibrary, NSObject, NSMutableDictionary, VUIMediaEntityKind, NSSet, NSString, VUIMediaEntityType, NSNumber, NSDate, _TVContentRating;

@interface VUIMediaEntity : NSObject {

	BOOL _localChanges;
	BOOL _cachesPropertiesOnFirstAccess;
	VUIMediaLibrary* _mediaLibrary;
	NSObject*<VUIMediaEntityIdentifierInternal> _identifierInternal;
	NSMutableDictionary* _firstAccessPropertiesCache;
	VUIMediaEntityKind* _kind;
	NSSet* _requestedProperties;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                                            //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSObject*<VUIMediaEntityIdentifierInternal> identifierInternal;              //@synthesize identifierInternal=_identifierInternal - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firstAccessPropertiesCache;                          //@synthesize firstAccessPropertiesCache=_firstAccessPropertiesCache - In the implementation block
@property (assign,nonatomic) BOOL cachesPropertiesOnFirstAccess;                                        //@synthesize cachesPropertiesOnFirstAccess=_cachesPropertiesOnFirstAccess - In the implementation block
@property (nonatomic,readonly) VUIMediaEntityKind * kind;                                               //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSSet * requestedProperties;                                             //@synthesize requestedProperties=_requestedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortTitle; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * type; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> identifier; 
@property (nonatomic,copy,readonly) NSNumber * isLocal; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * genreTitle; 
@property (nonatomic,copy,readonly) NSString * contentDescription; 
@property (nonatomic,copy,readonly) NSNumber * resolution; 
@property (nonatomic,copy,readonly) NSNumber * colorCapability; 
@property (nonatomic,copy,readonly) NSNumber * audioCapability; 
@property (nonatomic,copy,readonly) NSNumber * HLSResolution; 
@property (nonatomic,copy,readonly) NSNumber * HLSColorCapability; 
@property (nonatomic,copy,readonly) NSNumber * HLSAudioCapability; 
@property (nonatomic,copy,readonly) NSDate * addedDate; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * releaseYear; 
@property (nonatomic,copy,readonly) _TVContentRating * contentRating; 
@property (nonatomic,copy,readonly) NSString * coverArtImageIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * storeID; 
@property (nonatomic,copy,readonly) NSNumber * purchaseHistoryID; 
@property (nonatomic,copy) NSNumber * playedState; 
@property (nonatomic,copy,readonly) NSString * canonicalID; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> showIdentifier; 
@property (nonatomic,copy,readonly) NSString * showTitle; 
@property (nonatomic,copy,readonly) NSNumber * seasonNumber; 
@property (assign,getter=hasLocalChanges,nonatomic) BOOL localChanges;                                  //@synthesize localChanges=_localChanges - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(VUIMediaEntityType *)type;
-(NSObject*<VUIMediaEntityIdentifier>)identifier;
-(NSString *)title;
-(VUIMediaEntityKind *)kind;
-(NSString *)contentDescription;
-(NSNumber *)isLocal;
-(NSNumber *)storeID;
-(NSNumber *)resolution;
-(NSDate *)addedDate;
-(NSString *)showTitle;
-(NSDate *)releaseDate;
-(NSNumber *)seasonNumber;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(NSString *)genreTitle;
-(NSSet *)requestedProperties;
-(_TVContentRating *)contentRating;
-(NSNumber *)releaseYear;
-(NSString *)sortTitle;
-(BOOL)hasLocalChanges;
-(void)setIdentifierInternal:(NSObject*<VUIMediaEntityIdentifierInternal>)arg1 ;
-(id)_propertyValueForKey:(id)arg1 ;
-(NSNumber *)purchaseHistoryID;
-(NSString *)canonicalID;
-(id)assetController;
-(void)populateMetadata;
-(BOOL)isFetchedPropertiesEqualToFetchedMediaEntity:(id)arg1 ;
-(NSNumber *)HLSResolution;
-(NSNumber *)HLSColorCapability;
-(NSNumber *)colorCapability;
-(NSNumber *)HLSAudioCapability;
-(NSNumber *)audioCapability;
-(id)_propertyValueWithBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(NSNumber *)playedState;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(NSObject*<VUIMediaEntityIdentifier>)showIdentifier;
-(NSString *)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(void)setCachesPropertiesOnFirstAccess:(BOOL)arg1 ;
-(void)setLocalChanges:(BOOL)arg1 ;
-(NSObject*<VUIMediaEntityIdentifierInternal>)identifierInternal;
-(NSMutableDictionary *)firstAccessPropertiesCache;
-(id)_defaultValueForPropertyDescriptor:(id)arg1 ;
-(BOOL)cachesPropertiesOnFirstAccess;
-(void)setPlayedState:(NSNumber *)arg1 ;
-(BOOL)_didRequestPropertyWithKey:(id)arg1 ;
-(void)setFirstAccessPropertiesCache:(NSMutableDictionary *)arg1 ;
@end

