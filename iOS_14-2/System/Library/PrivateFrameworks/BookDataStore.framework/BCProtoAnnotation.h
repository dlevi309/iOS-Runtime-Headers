/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BookDataStore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, BCAnnotationRange;

@interface BCProtoAnnotation : PBCodable <NSCopying> {

	double _creationDate;
	double _locationModificationDate;
	double _modificationDate;
	double _userModificationDate;
	NSString* _annotationVersion;
	NSString* _assetVersion;
	NSString* _attachments;
	NSString* _chapterTitle;
	NSString* _creatorIdentifier;
	NSString* _futureProofing11;
	NSString* _futureProofing12;
	NSString* _locationCFIString;
	NSString* _note;
	NSString* _physicalPageNumber;
	int _plAbsolutePhysicalLocation;
	int _plLocationRangeEnd;
	int _plLocationRangeStart;
	NSString* _plLocationStorageUUID;
	NSData* _plUserData;
	float _readingProgress;
	float _readingProgressHighWaterMark;
	NSString* _representativeText;
	NSString* _selectedText;
	BCAnnotationRange* _selectedTextRange;
	unsigned _style;
	unsigned _type;
	NSString* _uuid;
	BOOL _deleted;
	BOOL _isUnderline;
	BOOL _spineIndexUpdated;
	SCD_Struct_BC3 _has;

}

@property (assign,nonatomic) double creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSString * creatorIdentifier;                       //@synthesize creatorIdentifier=_creatorIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted;                                       //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) BOOL hasIsUnderline; 
@property (assign,nonatomic) BOOL isUnderline;                                   //@synthesize isUnderline=_isUnderline - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationCFIString; 
@property (nonatomic,retain) NSString * locationCFIString;                       //@synthesize locationCFIString=_locationCFIString - In the implementation block
@property (assign,nonatomic) double modificationDate;                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasNote; 
@property (nonatomic,retain) NSString * note;                                    //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) BOOL hasRepresentativeText; 
@property (nonatomic,retain) NSString * representativeText;                      //@synthesize representativeText=_representativeText - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedText; 
@property (nonatomic,retain) NSString * selectedText;                            //@synthesize selectedText=_selectedText - In the implementation block
@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) unsigned style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasPhysicalPageNumber; 
@property (nonatomic,retain) NSString * physicalPageNumber;                      //@synthesize physicalPageNumber=_physicalPageNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnotationVersion; 
@property (nonatomic,retain) NSString * annotationVersion;                       //@synthesize annotationVersion=_annotationVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetVersion; 
@property (nonatomic,retain) NSString * assetVersion;                            //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAttachments; 
@property (nonatomic,retain) NSString * attachments;                             //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,readonly) BOOL hasChapterTitle; 
@property (nonatomic,retain) NSString * chapterTitle;                            //@synthesize chapterTitle=_chapterTitle - In the implementation block
@property (assign,nonatomic) BOOL hasUserModificationDate; 
@property (assign,nonatomic) double userModificationDate;                        //@synthesize userModificationDate=_userModificationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedTextRange; 
@property (nonatomic,retain) BCAnnotationRange * selectedTextRange;              //@synthesize selectedTextRange=_selectedTextRange - In the implementation block
@property (assign,nonatomic) BOOL hasReadingProgressHighWaterMark; 
@property (assign,nonatomic) float readingProgressHighWaterMark;                 //@synthesize readingProgressHighWaterMark=_readingProgressHighWaterMark - In the implementation block
@property (assign,nonatomic) BOOL hasSpineIndexUpdated; 
@property (assign,nonatomic) BOOL spineIndexUpdated;                             //@synthesize spineIndexUpdated=_spineIndexUpdated - In the implementation block
@property (assign,nonatomic) BOOL hasReadingProgress; 
@property (assign,nonatomic) float readingProgress;                              //@synthesize readingProgress=_readingProgress - In the implementation block
@property (nonatomic,readonly) BOOL hasFutureProofing11; 
@property (nonatomic,retain) NSString * futureProofing11;                        //@synthesize futureProofing11=_futureProofing11 - In the implementation block
@property (nonatomic,readonly) BOOL hasFutureProofing12; 
@property (nonatomic,retain) NSString * futureProofing12;                        //@synthesize futureProofing12=_futureProofing12 - In the implementation block
@property (assign,nonatomic) BOOL hasPlAbsolutePhysicalLocation; 
@property (assign,nonatomic) int plAbsolutePhysicalLocation;                     //@synthesize plAbsolutePhysicalLocation=_plAbsolutePhysicalLocation - In the implementation block
@property (assign,nonatomic) BOOL hasPlLocationRangeEnd; 
@property (assign,nonatomic) int plLocationRangeEnd;                             //@synthesize plLocationRangeEnd=_plLocationRangeEnd - In the implementation block
@property (assign,nonatomic) BOOL hasPlLocationRangeStart; 
@property (assign,nonatomic) int plLocationRangeStart;                           //@synthesize plLocationRangeStart=_plLocationRangeStart - In the implementation block
@property (nonatomic,readonly) BOOL hasPlLocationStorageUUID; 
@property (nonatomic,retain) NSString * plLocationStorageUUID;                   //@synthesize plLocationStorageUUID=_plLocationStorageUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlUserData; 
@property (nonatomic,retain) NSData * plUserData;                                //@synthesize plUserData=_plUserData - In the implementation block
@property (assign,nonatomic) BOOL hasLocationModificationDate; 
@property (assign,nonatomic) double locationModificationDate;                    //@synthesize locationModificationDate=_locationModificationDate - In the implementation block
-(double)modificationDate;
-(void)setSelectedTextRange:(BCAnnotationRange *)arg1 ;
-(NSString *)selectedText;
-(BCAnnotationRange *)selectedTextRange;
-(id)dictionaryRepresentation;
-(NSString *)assetVersion;
-(void)setAttachments:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasNote;
-(NSString *)attachments;
-(void)setSelectedText:(NSString *)arg1 ;
-(void)setNote:(NSString *)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(BOOL)hasAttachments;
-(BOOL)hasType;
-(BOOL)deleted;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(void)setAssetVersion:(NSString *)arg1 ;
-(id)description;
-(double)creationDate;
-(NSString *)note;
-(BOOL)hasStyle;
-(unsigned)type;
-(void)setModificationDate:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStyle:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDeleted;
-(unsigned)style;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)creatorIdentifier;
-(void)setCreatorIdentifier:(NSString *)arg1 ;
-(BOOL)hasAssetVersion;
-(NSString *)chapterTitle;
-(void)setChapterTitle:(NSString *)arg1 ;
-(BOOL)isUnderline;
-(int)plAbsolutePhysicalLocation;
-(int)plLocationRangeStart;
-(int)plLocationRangeEnd;
-(NSData *)plUserData;
-(NSString *)physicalPageNumber;
-(NSString *)annotationVersion;
-(double)userModificationDate;
-(float)readingProgressHighWaterMark;
-(float)readingProgress;
-(BOOL)spineIndexUpdated;
-(double)locationModificationDate;
-(NSString *)futureProofing12;
-(void)setIsUnderline:(BOOL)arg1 ;
-(void)setLocationCFIString:(NSString *)arg1 ;
-(void)setRepresentativeText:(NSString *)arg1 ;
-(void)setPhysicalPageNumber:(NSString *)arg1 ;
-(void)setAnnotationVersion:(NSString *)arg1 ;
-(void)setUserModificationDate:(double)arg1 ;
-(void)setReadingProgressHighWaterMark:(float)arg1 ;
-(void)setSpineIndexUpdated:(BOOL)arg1 ;
-(void)setReadingProgress:(float)arg1 ;
-(void)setFutureProofing12:(NSString *)arg1 ;
-(void)setPlAbsolutePhysicalLocation:(int)arg1 ;
-(void)setPlLocationRangeEnd:(int)arg1 ;
-(void)setPlLocationRangeStart:(int)arg1 ;
-(void)setPlLocationStorageUUID:(NSString *)arg1 ;
-(void)setPlUserData:(NSData *)arg1 ;
-(void)setLocationModificationDate:(double)arg1 ;
-(void)setFutureProofing11:(NSString *)arg1 ;
-(void)setHasIsUnderline:(BOOL)arg1 ;
-(BOOL)hasIsUnderline;
-(BOOL)hasLocationCFIString;
-(BOOL)hasRepresentativeText;
-(BOOL)hasSelectedText;
-(BOOL)hasPhysicalPageNumber;
-(BOOL)hasAnnotationVersion;
-(BOOL)hasChapterTitle;
-(void)setHasUserModificationDate:(BOOL)arg1 ;
-(BOOL)hasUserModificationDate;
-(BOOL)hasSelectedTextRange;
-(void)setHasReadingProgressHighWaterMark:(BOOL)arg1 ;
-(BOOL)hasReadingProgressHighWaterMark;
-(void)setHasSpineIndexUpdated:(BOOL)arg1 ;
-(BOOL)hasSpineIndexUpdated;
-(void)setHasReadingProgress:(BOOL)arg1 ;
-(BOOL)hasReadingProgress;
-(BOOL)hasFutureProofing11;
-(BOOL)hasFutureProofing12;
-(void)setHasPlAbsolutePhysicalLocation:(BOOL)arg1 ;
-(BOOL)hasPlAbsolutePhysicalLocation;
-(void)setHasPlLocationRangeEnd:(BOOL)arg1 ;
-(BOOL)hasPlLocationRangeEnd;
-(void)setHasPlLocationRangeStart:(BOOL)arg1 ;
-(BOOL)hasPlLocationRangeStart;
-(BOOL)hasPlLocationStorageUUID;
-(BOOL)hasPlUserData;
-(void)setHasLocationModificationDate:(BOOL)arg1 ;
-(BOOL)hasLocationModificationDate;
-(NSString *)locationCFIString;
-(NSString *)representativeText;
-(NSString *)futureProofing11;
-(NSString *)plLocationStorageUUID;
@end
