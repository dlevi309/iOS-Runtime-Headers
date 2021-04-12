/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBFeedRefreshSessionForYouConfig, NSString, NTPBFeedViewportEdition, NTPBDate;

@interface NTPBFeedViewportGap : PBCodable <NSCopying> {

	SCD_Struct_NT9* _activeGroupEmitterIDRefs;
	SCD_Struct_NT9* _groupEmitterIDRefs;
	NSMutableArray* _cursors;
	NTPBFeedRefreshSessionForYouConfig* _forYouConfig;
	NSString* _identifier;
	NTPBFeedViewportEdition* _lastCompletedEdition;
	NTPBDate* _modificationDate;
	NSMutableArray* _pendingGroups;
	NTPBDate* _refreshDate;
	BOOL _isOffline;
	BOOL _reachedEnd;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRefreshDate; 
@property (nonatomic,retain) NTPBDate * refreshDate;                                          //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) BOOL hasModificationDate; 
@property (nonatomic,retain) NTPBDate * modificationDate;                                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasReachedEnd; 
@property (assign,nonatomic) BOOL reachedEnd;                                                 //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (nonatomic,readonly) unsigned long long groupEmitterIDRefsCount; 
@property (nonatomic,readonly) int* groupEmitterIDRefs; 
@property (nonatomic,retain) NSMutableArray * cursors;                                        //@synthesize cursors=_cursors - In the implementation block
@property (nonatomic,readonly) BOOL hasLastCompletedEdition; 
@property (nonatomic,retain) NTPBFeedViewportEdition * lastCompletedEdition;                  //@synthesize lastCompletedEdition=_lastCompletedEdition - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingGroups;                                  //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,readonly) unsigned long long activeGroupEmitterIDRefsCount; 
@property (nonatomic,readonly) int* activeGroupEmitterIDRefs; 
@property (assign,nonatomic) BOOL hasIsOffline; 
@property (assign,nonatomic) BOOL isOffline;                                                  //@synthesize isOffline=_isOffline - In the implementation block
@property (nonatomic,readonly) BOOL hasForYouConfig; 
@property (nonatomic,retain) NTPBFeedRefreshSessionForYouConfig * forYouConfig;               //@synthesize forYouConfig=_forYouConfig - In the implementation block
+(Class)cursorsType;
+(Class)pendingGroupsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NTPBDate *)modificationDate;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(BOOL)hasIdentifier;
-(NTPBDate *)refreshDate;
-(BOOL)isOffline;
-(BOOL)reachedEnd;
-(void)setReachedEnd:(BOOL)arg1 ;
-(NSMutableArray *)pendingGroups;
-(void)setPendingGroups:(NSMutableArray *)arg1 ;
-(void)setIsOffline:(BOOL)arg1 ;
-(NTPBFeedRefreshSessionForYouConfig *)forYouConfig;
-(NTPBFeedViewportEdition *)lastCompletedEdition;
-(void)setRefreshDate:(NTPBDate *)arg1 ;
-(unsigned long long)cursorsCount;
-(id)cursorsAtIndex:(unsigned long long)arg1 ;
-(int)groupEmitterIDRefAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)activeGroupEmitterIDRefsCount;
-(int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)arg1 ;
-(void)setLastCompletedEdition:(NTPBFeedViewportEdition *)arg1 ;
-(void)addGroupEmitterIDRef:(int)arg1 ;
-(void)addCursors:(id)arg1 ;
-(void)addPendingGroups:(id)arg1 ;
-(void)addActiveGroupEmitterIDRefs:(int)arg1 ;
-(void)setForYouConfig:(NTPBFeedRefreshSessionForYouConfig *)arg1 ;
-(void)setCursors:(NSMutableArray *)arg1 ;
-(unsigned long long)groupEmitterIDRefsCount;
-(BOOL)hasRefreshDate;
-(BOOL)hasModificationDate;
-(void)setHasReachedEnd:(BOOL)arg1 ;
-(BOOL)hasReachedEnd;
-(int*)groupEmitterIDRefs;
-(void)clearGroupEmitterIDRefs;
-(void)setGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearCursors;
-(BOOL)hasLastCompletedEdition;
-(void)clearPendingGroups;
-(unsigned long long)pendingGroupsCount;
-(id)pendingGroupsAtIndex:(unsigned long long)arg1 ;
-(int*)activeGroupEmitterIDRefs;
-(void)clearActiveGroupEmitterIDRefs;
-(void)setActiveGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasIsOffline:(BOOL)arg1 ;
-(BOOL)hasIsOffline;
-(BOOL)hasForYouConfig;
-(NSMutableArray *)cursors;
@end

