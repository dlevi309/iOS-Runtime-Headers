/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailFeatureEngagementReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _feature;
	int _filterStatus;
	int _inView;
	int _interactionGesture;
	int _sourceType;
	BOOL _fromSwipeMenu;
	BOOL _includeAttachments;
	BOOL _usedPrediction;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFeature; 
@property (assign,nonatomic) int feature;                               //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) BOOL hasSourceType; 
@property (assign,nonatomic) int sourceType;                            //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) BOOL hasInteractionGesture; 
@property (assign,nonatomic) int interactionGesture;                    //@synthesize interactionGesture=_interactionGesture - In the implementation block
@property (assign,nonatomic) BOOL hasFilterStatus; 
@property (assign,nonatomic) int filterStatus;                          //@synthesize filterStatus=_filterStatus - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeAttachments; 
@property (assign,nonatomic) BOOL includeAttachments;                   //@synthesize includeAttachments=_includeAttachments - In the implementation block
@property (assign,nonatomic) BOOL hasUsedPrediction; 
@property (assign,nonatomic) BOOL usedPrediction;                       //@synthesize usedPrediction=_usedPrediction - In the implementation block
@property (assign,nonatomic) BOOL hasFromSwipeMenu; 
@property (assign,nonatomic) BOOL fromSwipeMenu;                        //@synthesize fromSwipeMenu=_fromSwipeMenu - In the implementation block
@property (assign,nonatomic) BOOL hasInView; 
@property (assign,nonatomic) int inView;                                //@synthesize inView=_inView - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)feature;
-(void)setFeature:(int)arg1 ;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)sourceTypeAsString:(int)arg1 ;
-(int)StringAsSourceType:(id)arg1 ;
-(BOOL)hasSourceType;
-(void)setHasSourceType:(BOOL)arg1 ;
-(BOOL)includeAttachments;
-(void)setIncludeAttachments:(BOOL)arg1 ;
-(void)setHasFeature:(BOOL)arg1 ;
-(BOOL)hasFeature;
-(id)featureAsString:(int)arg1 ;
-(int)StringAsFeature:(id)arg1 ;
-(int)interactionGesture;
-(void)setInteractionGesture:(int)arg1 ;
-(void)setHasInteractionGesture:(BOOL)arg1 ;
-(BOOL)hasInteractionGesture;
-(id)interactionGestureAsString:(int)arg1 ;
-(int)StringAsInteractionGesture:(id)arg1 ;
-(int)filterStatus;
-(void)setFilterStatus:(int)arg1 ;
-(void)setHasFilterStatus:(BOOL)arg1 ;
-(BOOL)hasFilterStatus;
-(id)filterStatusAsString:(int)arg1 ;
-(int)StringAsFilterStatus:(id)arg1 ;
-(void)setHasIncludeAttachments:(BOOL)arg1 ;
-(BOOL)hasIncludeAttachments;
-(void)setUsedPrediction:(BOOL)arg1 ;
-(void)setHasUsedPrediction:(BOOL)arg1 ;
-(BOOL)hasUsedPrediction;
-(void)setFromSwipeMenu:(BOOL)arg1 ;
-(void)setHasFromSwipeMenu:(BOOL)arg1 ;
-(BOOL)hasFromSwipeMenu;
-(int)inView;
-(void)setInView:(int)arg1 ;
-(void)setHasInView:(BOOL)arg1 ;
-(BOOL)hasInView;
-(id)inViewAsString:(int)arg1 ;
-(int)StringAsInView:(id)arg1 ;
-(BOOL)usedPrediction;
-(BOOL)fromSwipeMenu;
@end

