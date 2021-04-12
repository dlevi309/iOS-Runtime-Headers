/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventDisplayAnalytic : PBCodable <NSCopying> {

	double _meanImageSpacing;
	int _displayActionTrigger;
	int _displayEvent;
	unsigned _movementDistance;
	unsigned _renderedImageCount;
	unsigned _requestedImageCount;
	unsigned _requiredResourcesAvailable;
	unsigned _totalTime;
	struct {
		unsigned has_meanImageSpacing : 1;
		unsigned has_displayActionTrigger : 1;
		unsigned has_displayEvent : 1;
		unsigned has_movementDistance : 1;
		unsigned has_renderedImageCount : 1;
		unsigned has_requestedImageCount : 1;
		unsigned has_requiredResourcesAvailable : 1;
		unsigned has_totalTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDisplayActionTrigger; 
@property (assign,nonatomic) int displayActionTrigger; 
@property (assign,nonatomic) BOOL hasRequiredResourcesAvailable; 
@property (assign,nonatomic) unsigned requiredResourcesAvailable; 
@property (assign,nonatomic) BOOL hasTotalTime; 
@property (assign,nonatomic) unsigned totalTime; 
@property (assign,nonatomic) BOOL hasRequestedImageCount; 
@property (assign,nonatomic) unsigned requestedImageCount; 
@property (assign,nonatomic) BOOL hasRenderedImageCount; 
@property (assign,nonatomic) unsigned renderedImageCount; 
@property (assign,nonatomic) BOOL hasMovementDistance; 
@property (assign,nonatomic) unsigned movementDistance; 
@property (assign,nonatomic) BOOL hasMeanImageSpacing; 
@property (assign,nonatomic) double meanImageSpacing; 
@property (assign,nonatomic) BOOL hasDisplayEvent; 
@property (assign,nonatomic) int displayEvent; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTotalTime;
-(void)setTotalTime:(unsigned)arg1 ;
-(void)setHasTotalTime:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)displayActionTrigger;
-(unsigned)renderedImageCount;
-(void)setHasDisplayActionTrigger:(BOOL)arg1 ;
-(BOOL)hasDisplayActionTrigger;
-(id)displayActionTriggerAsString:(int)arg1 ;
-(int)StringAsDisplayActionTrigger:(id)arg1 ;
-(unsigned)requiredResourcesAvailable;
-(void)setHasRequiredResourcesAvailable:(BOOL)arg1 ;
-(BOOL)hasRequiredResourcesAvailable;
-(unsigned)requestedImageCount;
-(void)setHasRequestedImageCount:(BOOL)arg1 ;
-(unsigned)movementDistance;
-(BOOL)hasRequestedImageCount;
-(void)setHasRenderedImageCount:(BOOL)arg1 ;
-(BOOL)hasRenderedImageCount;
-(BOOL)hasMovementDistance;
-(void)setHasMovementDistance:(BOOL)arg1 ;
-(double)meanImageSpacing;
-(void)setHasMeanImageSpacing:(BOOL)arg1 ;
-(BOOL)hasMeanImageSpacing;
-(int)displayEvent;
-(void)setHasDisplayEvent:(BOOL)arg1 ;
-(BOOL)hasDisplayEvent;
-(id)displayEventAsString:(int)arg1 ;
-(int)StringAsDisplayEvent:(id)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setDisplayActionTrigger:(int)arg1 ;
-(void)setRequestedImageCount:(unsigned)arg1 ;
-(void)setRequiredResourcesAvailable:(unsigned)arg1 ;
-(void)setRenderedImageCount:(unsigned)arg1 ;
-(void)setMovementDistance:(unsigned)arg1 ;
-(void)setDisplayEvent:(int)arg1 ;
-(void)setMeanImageSpacing:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)totalTime;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

