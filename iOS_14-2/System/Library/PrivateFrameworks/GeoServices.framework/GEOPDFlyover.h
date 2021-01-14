/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDCameraPathFrame* _cameraPaths;
	unsigned long long _cameraPathsCount;
	unsigned long long _cameraPathsSpace;
	GEOPDLabelFrame* _labelFrames;
	unsigned long long _labelFramesCount;
	unsigned long long _labelFramesSpace;
	NSMutableArray* _labels;
	NSMutableArray* _notificationMessages;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _useSplines;
	struct {
		unsigned has_useSplines : 1;
		unsigned read_cameraPaths : 1;
		unsigned read_labelFrames : 1;
		unsigned read_labels : 1;
		unsigned read_notificationMessages : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long cameraPathsCount; 
@property (nonatomic,readonly) GEOPDCameraPathFrame* cameraPaths; 
@property (assign,nonatomic) BOOL hasUseSplines; 
@property (assign,nonatomic) BOOL useSplines; 
@property (nonatomic,readonly) unsigned long long labelFramesCount; 
@property (nonatomic,readonly) GEOPDLabelFrame* labelFrames; 
@property (nonatomic,retain) NSMutableArray * labels; 
@property (nonatomic,retain) NSMutableArray * notificationMessages; 
+(BOOL)isValid:(id)arg1 ;
+(Class)labelType;
+(Class)notificationMessageType;
+(id)flyoverForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)clearLabels;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setLabelFrames:(GEOPDLabelFrame*)arg1 count:(unsigned long long)arg2 ;
-(id)jsonRepresentation;
-(GEOPDLabelFrame)labelFrameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)notificationMessages;
-(void)setNotificationMessages:(NSMutableArray *)arg1 ;
-(unsigned long long)cameraPathsCount;
-(NSMutableArray *)labels;
-(id)bestLocalizedLabelAtIndex:(unsigned long long)arg1 ;
-(void)addNotificationMessage:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearLabelFrames;
-(BOOL)hasUseSplines;
-(void)clearCameraPaths;
-(id)initWithData:(id)arg1 ;
-(void)addCameraPath:(GEOPDCameraPathFrame)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDLabelFrame*)labelFrames;
-(unsigned long long)labelsCount;
-(id)description;
-(void)setUseSplines:(BOOL)arg1 ;
-(GEOPDCameraPathFrame*)cameraPaths;
-(unsigned long long)notificationMessagesCount;
-(BOOL)useSplines;
-(unsigned long long)hash;
-(GEOPDCameraPathFrame)cameraPathAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addLabel:(id)arg1 ;
-(unsigned long long)labelFramesCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)bestLocalizedAnnouncementMessage;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)clearNotificationMessages;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasUseSplines:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)notificationMessageAtIndex:(unsigned long long)arg1 ;
-(void)setCameraPaths:(GEOPDCameraPathFrame*)arg1 count:(unsigned long long)arg2 ;
-(void)addLabelFrame:(GEOPDLabelFrame)arg1 ;
@end

