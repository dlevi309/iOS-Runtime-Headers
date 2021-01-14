/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>
#import <MapsSuggestions/MapsSuggestionsJSONable.h>

@class NSMutableSet, NSMutableDictionary, NSString, NSData, NSDate, GEOMapItemStorage;

@interface MapsSuggestionsEntry : NSObject <NSCopying, NSSecureCoding, MapsSuggestionsObject, MapsSuggestionsJSONable> {

	NSMutableSet* _typeHistory;
	NSMutableDictionary* _sourceSpecificInfo;
	BOOL _deleted;
	long long _type;
	NSString* _title;
	NSString* _titleWhenLocked;
	NSString* _subtitle;
	NSString* _subtitleWhenLocked;
	NSData* _iconData;
	NSString* _undecoratedTitle;
	NSString* _undecoratedTitleWhenLocked;
	NSString* _undecoratedSubtitle;
	NSString* _undecoratedSubtitleWhenLocked;
	double _weight;
	NSDate* _expires;
	GEOMapItemStorage* _geoMapItem;
	NSString* _originatingSourceName;

}

@property (nonatomic,readonly) BOOL isShortcut; 
@property (nonatomic,readonly) BOOL isPureShortcut; 
@property (nonatomic,readonly) BOOL isShortcutForSetup; 
@property (nonatomic,readonly) NSString * shortcutIdentifier; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * titleWhenLocked;                            //@synthesize titleWhenLocked=_titleWhenLocked - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * subtitleWhenLocked;                         //@synthesize subtitleWhenLocked=_subtitleWhenLocked - In the implementation block
@property (nonatomic,retain) NSData * iconData;                                     //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSString * undecoratedTitle;                           //@synthesize undecoratedTitle=_undecoratedTitle - In the implementation block
@property (nonatomic,retain) NSString * undecoratedTitleWhenLocked;                 //@synthesize undecoratedTitleWhenLocked=_undecoratedTitleWhenLocked - In the implementation block
@property (nonatomic,retain) NSString * undecoratedSubtitle;                        //@synthesize undecoratedSubtitle=_undecoratedSubtitle - In the implementation block
@property (nonatomic,retain) NSString * undecoratedSubtitleWhenLocked;              //@synthesize undecoratedSubtitleWhenLocked=_undecoratedSubtitleWhenLocked - In the implementation block
@property (assign,nonatomic) double weight;                                         //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSDate * expires;                                      //@synthesize expires=_expires - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                          //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) GEOMapItemStorage * geoMapItem;                        //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,retain) NSString * originatingSourceName;                      //@synthesize originatingSourceName=_originatingSourceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,copy,readonly) NSString * shortDescription; 
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) BOOL hasExpired; 
@property (nonatomic,copy,readonly) NSString * serializedHexString; 
@property (nonatomic,copy,readonly) NSString * serializedBase64String; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)defaultDirectionsTransportType;
+(id)entryWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6 ;
+(id)entryFromSerializedHexString:(id)arg1 hasPrefix:(BOOL)arg2 ;
+(id)entryWithData:(id)arg1 ;
+(id)entryFromSerializedBase64String:(id)arg1 hasPrefix:(BOOL)arg2 ;
+(id)entryFromSerializedString:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(void)setContacts:(id)arg1 ;
-(id)contacts;
-(BOOL)containsKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasStartTime;
-(NSDate *)expires;
-(NSString *)uniqueName;
-(id)URLForKey:(id)arg1 ;
-(NSData *)iconData;
-(void)setExpires:(NSDate *)arg1 ;
-(void)setWeight:(double)arg1 ;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)shortDescription;
-(NSString *)uniqueIdentifier;
-(BOOL)deleted;
-(NSString *)fullDescription;
-(BOOL)hasExpired;
-(double)weight;
-(BOOL)isEqualToEntry:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)booleanForKey:(id)arg1 ;
-(void)setBoolean:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setETA:(id)arg1 forKey:(id)arg2 ;
-(id)ETAForKey:(id)arg1 ;
-(BOOL)booleanForKey:(id)arg1 is:(BOOL)arg2 ;
-(void)replaceByEntry:(id)arg1 ;
-(BOOL)hasFullFlightInfoAndGate;
-(NSString *)undecoratedSubtitle;
-(void)setUndecoratedSubtitle:(NSString *)arg1 ;
-(void)setGeoMapItem:(GEOMapItemStorage *)arg1 ;
-(void)setMapItemHandleData:(id)arg1 ;
-(id)mapItemHandleData;
-(NSString *)description;
-(NSString *)undecoratedTitle;
-(void)setUndecoratedTitle:(NSString *)arg1 ;
-(BOOL)_wasEverOfType:(long long)arg1 ;
-(BOOL)_wasEverOneOfTypes:(id)arg1 ;
-(void)_overrideType:(long long)arg1 ;
-(void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 protectTitles:(BOOL)arg3 protectTitleDecorations:(BOOL)arg4 protectMapItem:(BOOL)arg5 protectWeight:(BOOL)arg6 protectExpiration:(BOOL)arg7 protectIcon:(BOOL)arg8 ;
-(void)mergeSpecificsFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)sourceSpecificInfo;
-(void)setSourceSpecificInfo:(id)arg1 ;
-(NSString *)titleWhenLocked;
-(void)replaceByEntry:(id)arg1 forceDecoratedOverwrites:(BOOL)arg2 ;
-(NSString *)undecoratedTitleWhenLocked;
-(void)setUndecoratedTitleWhenLocked:(NSString *)arg1 ;
-(NSString *)undecoratedSubtitleWhenLocked;
-(void)setUndecoratedSubtitleWhenLocked:(NSString *)arg1 ;
-(void)setTitleWhenLocked:(NSString *)arg1 ;
-(NSString *)subtitleWhenLocked;
-(void)setSubtitleWhenLocked:(NSString *)arg1 ;
-(BOOL)wasEverOfType:(long long)arg1 ;
-(NSString *)originatingSourceName;
-(BOOL)updateUndecoratedTitle:(id)arg1 ;
-(BOOL)updateUndecoratedSubtitle:(id)arg1 ;
-(BOOL)wasEverOneOfTypes:(id)arg1 ;
-(BOOL)startsBeforeEntry:(id)arg1 ;
-(BOOL)expiresBeforeEntry:(id)arg1 ;
-(void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 ;
-(BOOL)hasStartAndEndTime;
-(id)departingAirportCode;
-(BOOL)hasEssentialFlightInfo;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(NSString *)serializedBase64String;
-(void)setOriginatingSourceName:(NSString *)arg1 ;
-(long long)availableRemovalBehaviors;
-(void)setAvailableRemovalBehavior:(long long)arg1 ;
-(BOOL)isShortcut;
-(id)data;
-(id)initWithType:(long long)arg1 title:(id)arg2 ;
-(id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 geoMapItem:(id)arg6 sourceSpecificInfo:(id)arg7 ;
-(long long)type;
-(id)UUIDForKey:(id)arg1 ;
-(BOOL)isPureShortcut;
-(BOOL)isShortcutForSetup;
-(void)setUUID:(id)arg1 forKey:(id)arg2 ;
-(void)resetAvailableRemovalBehavior:(long long)arg1 ;
-(NSString *)serializedHexString;
-(unsigned long long)hash;
-(id)objectForJSON;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)uint64ForKey:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(GEOMapItemStorage *)geoMapItem;
-(long long)integerForKey:(id)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(id)endTime;
-(void)setIconData:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)startTime;
-(id)stringForKey:(id)arg1 ;
-(NSString *)shortcutIdentifier;
-(NSString *)title;
-(BOOL)hasEndTime;
-(BOOL)isEqual:(id)arg1 ;
@end

