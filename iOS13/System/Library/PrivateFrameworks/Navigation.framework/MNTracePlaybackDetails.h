/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable <NSCopying> {

	double _currentPosition;
	double _pedestrianTraceStartRelativeTimestamp;
	double _traceDuration;
	NSMutableArray* _bookmarks;
	int _eventType;
	NSString* _pedestrianTracePath;
	unsigned _recordedBookmarkID;
	NSString* _tracePath;
	SCD_Struct_MN7 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasTracePath; 
@property (nonatomic,retain) NSString * tracePath;                                       //@synthesize tracePath=_tracePath - In the implementation block
@property (assign,nonatomic) BOOL hasTraceDuration; 
@property (assign,nonatomic) double traceDuration;                                       //@synthesize traceDuration=_traceDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentPosition; 
@property (assign,nonatomic) double currentPosition;                                     //@synthesize currentPosition=_currentPosition - In the implementation block
@property (nonatomic,retain) NSMutableArray * bookmarks;                                 //@synthesize bookmarks=_bookmarks - In the implementation block
@property (assign,nonatomic) BOOL hasRecordedBookmarkID; 
@property (assign,nonatomic) unsigned recordedBookmarkID;                                //@synthesize recordedBookmarkID=_recordedBookmarkID - In the implementation block
@property (nonatomic,readonly) BOOL hasPedestrianTracePath; 
@property (nonatomic,retain) NSString * pedestrianTracePath;                             //@synthesize pedestrianTracePath=_pedestrianTracePath - In the implementation block
@property (assign,nonatomic) BOOL hasPedestrianTraceStartRelativeTimestamp; 
@property (assign,nonatomic) double pedestrianTraceStartRelativeTimestamp;               //@synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp - In the implementation block
+(Class)bookmarkType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)eventType;
-(NSMutableArray *)bookmarks;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(double)currentPosition;
-(void)setCurrentPosition:(double)arg1 ;
-(void)addBookmark:(id)arg1 ;
-(void)setTracePath:(NSString *)arg1 ;
-(unsigned long long)bookmarksCount;
-(void)clearBookmarks;
-(id)bookmarkAtIndex:(unsigned long long)arg1 ;
-(void)setPedestrianTracePath:(NSString *)arg1 ;
-(BOOL)hasTracePath;
-(void)setTraceDuration:(double)arg1 ;
-(void)setHasTraceDuration:(BOOL)arg1 ;
-(BOOL)hasTraceDuration;
-(void)setHasCurrentPosition:(BOOL)arg1 ;
-(BOOL)hasCurrentPosition;
-(void)setRecordedBookmarkID:(unsigned)arg1 ;
-(void)setHasRecordedBookmarkID:(BOOL)arg1 ;
-(BOOL)hasRecordedBookmarkID;
-(BOOL)hasPedestrianTracePath;
-(void)setPedestrianTraceStartRelativeTimestamp:(double)arg1 ;
-(void)setHasPedestrianTraceStartRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasPedestrianTraceStartRelativeTimestamp;
-(NSString *)tracePath;
-(double)traceDuration;
-(void)setBookmarks:(NSMutableArray *)arg1 ;
-(unsigned)recordedBookmarkID;
-(NSString *)pedestrianTracePath;
-(double)pedestrianTraceStartRelativeTimestamp;
@end

