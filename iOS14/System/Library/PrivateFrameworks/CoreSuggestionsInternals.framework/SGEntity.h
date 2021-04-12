/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableSet, NSSet, SGRecordId, SGDuplicateKey, SGExtractionInfo, NSString, CSPerson, SGSimpleTimeRange, NSData;

@interface SGEntity : NSObject {

	NSMutableSet* _tags;
	NSSet* _tagsSnapshot;
	opaque_pthread_mutex_t _tagsLock;
	unsigned _state;
	SGRecordId* _recordId;
	SGDuplicateKey* _duplicateKey;
	SGExtractionInfo* _extractionInfo;
	NSString* _sourceKey;
	NSString* _content;
	NSString* _title;
	NSString* _authorNickname;
	NSString* _authorPhotoPath;
	CSPerson* _author;
	SGUnixTimestamp_ _creationTimestamp;
	SGUnixTimestamp_ _lastModifiedTimestamp;
	SGSimpleTimeRange* _timeRange;
	NSData* _structuredData;
	double _quality;
	NSMutableSet* _locations;
	long long _masterEntityId;
	long long _groupId;
	NSString* _operatingSystemVersion;
	NSRange _contentRangeOfInterest;

}

@property (nonatomic,retain) SGRecordId * recordId;                               //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,retain) SGDuplicateKey * duplicateKey;                       //@synthesize duplicateKey=_duplicateKey - In the implementation block
@property (nonatomic,retain) SGExtractionInfo * extractionInfo;                   //@synthesize extractionInfo=_extractionInfo - In the implementation block
@property (nonatomic,copy) NSString * sourceKey;                                  //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,copy) NSString * content;                                    //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) NSRange contentRangeOfInterest;                      //@synthesize contentRangeOfInterest=_contentRangeOfInterest - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * authorNickname;                             //@synthesize authorNickname=_authorNickname - In the implementation block
@property (nonatomic,copy) NSString * authorPhotoPath;                            //@synthesize authorPhotoPath=_authorPhotoPath - In the implementation block
@property (nonatomic,retain) CSPerson * author;                                   //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) SGUnixTimestamp_ creationTimestamp;                  //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign,nonatomic) SGUnixTimestamp_ lastModifiedTimestamp;              //@synthesize lastModifiedTimestamp=_lastModifiedTimestamp - In the implementation block
@property (nonatomic,retain) SGSimpleTimeRange * timeRange;                       //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,copy) NSData * structuredData;                               //@synthesize structuredData=_structuredData - In the implementation block
@property (assign,nonatomic) double quality;                                      //@synthesize quality=_quality - In the implementation block
@property (nonatomic,retain) NSMutableSet * locations;                            //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) long long masterEntityId;                            //@synthesize masterEntityId=_masterEntityId - In the implementation block
@property (assign,nonatomic) long long groupId;                                   //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic) unsigned state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * operatingSystemVersion;                     //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
-(NSMutableSet *)locations;
-(id)initWithEntity:(id)arg1 ;
-(void)addTag:(id)arg1 ;
-(BOOL)hasTag:(id)arg1 ;
-(void)setMasterEntityId:(long long)arg1 ;
-(BOOL)isInhuman;
-(void)validate;
-(void)setLocations:(NSMutableSet *)arg1 ;
-(SGRecordId *)recordId;
-(NSString *)authorPhotoPath;
-(CSPerson *)author;
-(void)setAuthor:(CSPerson *)arg1 ;
-(id)tags;
-(SGDuplicateKey *)duplicateKey;
-(NSString *)content;
-(id)init;
-(void)setContent:(NSString *)arg1 ;
-(BOOL)isNaturalLanguageEvent;
-(void)setSourceKey:(NSString *)arg1 ;
-(void)setStructuredData:(NSData *)arg1 ;
-(id)extraKeyTag;
-(void)setTimeRange:(SGSimpleTimeRange *)arg1 ;
-(long long)groupId;
-(NSString *)operatingSystemVersion;
-(void)setCreationTimestamp:(SGUnixTimestamp_)arg1 ;
-(void)setOperatingSystemVersion:(NSString *)arg1 ;
-(SGSimpleTimeRange *)timeRange;
-(NSData *)structuredData;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAuthorNickname:(NSString *)arg1 ;
-(SGUnixTimestamp_)creationTimestamp;
-(void)setRecordId:(SGRecordId *)arg1 ;
-(void)setExtractionInfo:(SGExtractionInfo *)arg1 ;
-(void)setDuplicateKey:(SGDuplicateKey *)arg1 ;
-(double)quality;
-(NSRange)contentRangeOfInterest;
-(void)setLastModifiedTimestamp:(SGUnixTimestamp_)arg1 ;
-(id)description;
-(SGExtractionInfo *)extractionInfo;
-(void)setGroupId:(long long)arg1 ;
-(id)fieldsToSaveOnConfirmation;
-(NSString *)authorNickname;
-(SGUnixTimestamp_)lastModifiedTimestamp;
-(long long)masterEntityId;
-(id)loadOrigin:(id)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(id)loggingIdentifier;
-(unsigned long long)hash;
-(unsigned)state;
-(NSString *)sourceKey;
-(void)setQuality:(double)arg1 ;
-(BOOL)isEqualToEntity:(id)arg1 ;
-(BOOL)isFromForwardedMessage;
-(BOOL)isPartiallyDownloaded;
-(void)setContentRangeOfInterest:(NSRange)arg1 ;
-(id)templateShortName;
-(void)setAuthorPhotoPath:(NSString *)arg1 ;
-(BOOL)isCancelled;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

