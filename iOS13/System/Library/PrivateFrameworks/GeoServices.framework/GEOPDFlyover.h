/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_cameraPaths : 1;
		unsigned wrote_labelFrames : 1;
		unsigned wrote_labels : 1;
		unsigned wrote_notificationMessages : 1;
		unsigned wrote_useSplines : 1;
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
+(Class)labelType;
+(BOOL)isValid:(id)arg1 ;
+(id)flyoverForPlaceData:(id)arg1 ;
+(Class)notificationMessageType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)labels;
-(unsigned long long)labelsCount;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)notificationMessages;
-(id)bestLocalizedAnnouncementMessage;
-(void)_readLabels;
-(void)_addNoFlagsLabel:(id)arg1 ;
-(void)clearLabels;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)addLabel:(id)arg1 ;
-(void)clearCameraPaths;
-(void)clearLabelFrames;
-(void)_readCameraPaths;
-(void)_addNoFlagsCameraPath:(GEOPDCameraPathFrame)arg1 ;
-(void)_readLabelFrames;
-(void)_addNoFlagsLabelFrame:(GEOPDLabelFrame)arg1 ;
-(void)_readNotificationMessages;
-(void)_addNoFlagsNotificationMessage:(id)arg1 ;
-(unsigned long long)cameraPathsCount;
-(GEOPDCameraPathFrame)cameraPathAtIndex:(unsigned long long)arg1 ;
-(void)addCameraPath:(GEOPDCameraPathFrame)arg1 ;
-(unsigned long long)labelFramesCount;
-(GEOPDLabelFrame)labelFrameAtIndex:(unsigned long long)arg1 ;
-(void)addLabelFrame:(GEOPDLabelFrame)arg1 ;
-(unsigned long long)notificationMessagesCount;
-(void)clearNotificationMessages;
-(id)notificationMessageAtIndex:(unsigned long long)arg1 ;
-(void)addNotificationMessage:(id)arg1 ;
-(GEOPDCameraPathFrame*)cameraPaths;
-(void)setCameraPaths:(GEOPDCameraPathFrame*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)useSplines;
-(void)setUseSplines:(BOOL)arg1 ;
-(void)setHasUseSplines:(BOOL)arg1 ;
-(BOOL)hasUseSplines;
-(GEOPDLabelFrame*)labelFrames;
-(void)setLabelFrames:(GEOPDLabelFrame*)arg1 count:(unsigned long long)arg2 ;
-(void)setNotificationMessages:(NSMutableArray *)arg1 ;
-(id)bestLocalizedLabelAtIndex:(unsigned long long)arg1 ;
@end

