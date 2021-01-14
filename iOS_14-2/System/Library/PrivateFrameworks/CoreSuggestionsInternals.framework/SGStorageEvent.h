/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/SGEventForGeocode.h>

@class SGRecordId, SGDuplicateKey, NSString, SGSimpleTimeRange, NSArray, NSSet, NSData;

@interface SGStorageEvent : NSObject <SGEventForGeocode> {

	BOOL _curated;
	unsigned _state;
	SGRecordId* _recordId;
	SGDuplicateKey* _duplicateKey;
	NSString* _sourceKey;
	NSString* _content;
	NSString* _title;
	SGUnixTimestamp_ _creationTimestamp;
	SGUnixTimestamp_ _lastModifiedTimestamp;
	SGSimpleTimeRange* _when;
	NSArray* _locations;
	NSSet* _tags;
	NSData* _structuredData;

}

@property (nonatomic,readonly) SGRecordId * recordId;                               //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) SGDuplicateKey * duplicateKey;                       //@synthesize duplicateKey=_duplicateKey - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                                //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * content;                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SGUnixTimestamp_ creationTimestamp;                  //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (nonatomic,readonly) SGUnixTimestamp_ lastModifiedTimestamp;              //@synthesize lastModifiedTimestamp=_lastModifiedTimestamp - In the implementation block
@property (nonatomic,readonly) SGSimpleTimeRange * when;                            //@synthesize when=_when - In the implementation block
@property (nonatomic,readonly) NSArray * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSSet * tags;                                        //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) NSData * structuredData;                             //@synthesize structuredData=_structuredData - In the implementation block
@property (nonatomic,readonly) unsigned state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL curated;                                        //@synthesize curated=_curated - In the implementation block
@property (nonatomic,readonly) NSString * opaqueKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storageEventFromEntity:(id)arg1 ;
-(NSArray *)locations;
-(SGRecordId *)recordId;
-(NSSet *)tags;
-(SGDuplicateKey *)duplicateKey;
-(BOOL)isAllDay;
-(NSString *)content;
-(id)geocodeEndDate;
-(NSString *)opaqueKey;
-(id)extraKeyTag;
-(id)geocodeStartTimeZone;
-(NSData *)structuredData;
-(id)geocodeStartDate;
-(SGUnixTimestamp_)creationTimestamp;
-(BOOL)curated;
-(NSString *)description;
-(id)fieldsToSaveOnConfirmation;
-(SGUnixTimestamp_)lastModifiedTimestamp;
-(id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5 ;
-(id)loggingIdentifier;
-(unsigned long long)hash;
-(unsigned)state;
-(SGSimpleTimeRange *)when;
-(NSString *)sourceKey;
-(id)poiFilters;
-(id)geocodeLocations;
-(unsigned long long)geocodingMode;
-(id)geocodeEndTimeZone;
-(BOOL)isCancelled;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)urlFromTags;
-(id)convertToEventWithOrigin:(id)arg1 ;
-(id)convertToEvent:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 content:(id)arg4 title:(id)arg5 creationTimestamp:(SGUnixTimestamp_)arg6 lastModifiedTimestamp:(SGUnixTimestamp_)arg7 tags:(id)arg8 when:(id)arg9 locations:(id)arg10 structuredData:(id)arg11 state:(unsigned)arg12 curated:(BOOL)arg13 ;
-(BOOL)isFromDataDetectors;
-(BOOL)isFromSuggestions;
-(BOOL)isEqualToStorageEvent:(id)arg1 ;
@end

