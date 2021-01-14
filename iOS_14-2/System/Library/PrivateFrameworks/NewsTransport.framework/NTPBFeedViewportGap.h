/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBFeedRefreshSessionForYouConfig, NSString, NTPBFeedViewportEdition, NTPBDate;

@interface NTPBFeedViewportGap : PBCodable <NSCopying> {

	SCD_Struct_NT10* _activeGroupEmitterIDRefs;
	SCD_Struct_NT10* _groupEmitterIDRefs;
	NSMutableArray* _cursors;
	NTPBFeedRefreshSessionForYouConfig* _forYouConfig;
	NSString* _identifier;
	NTPBFeedViewportEdition* _lastCompletedEdition;
	NTPBDate* _modificationDate;
	NSMutableArray* _pendingGroups;
	NTPBDate* _refreshDate;
	BOOL _isOffline;
	BOOL _reachedEnd;
	SCD_Struct_CO1 _has;

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
-(NTPBDate *)modificationDate;
-(NTPBDate *)refreshDate;
-(BOOL)reachedEnd;
-(id)dictionaryRepresentation;
-(void)clearGroupEmitterIDRefs;
-(BOOL)hasLastCompletedEdition;
-(void)setGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addPendingGroups:(id)arg1 ;
-(BOOL)hasRefreshDate;
-(void)addCursors:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)activeGroupEmitterIDRefsCount;
-(BOOL)isOffline;
-(void)setCursors:(NSMutableArray *)arg1 ;
-(int*)groupEmitterIDRefs;
-(void)mergeFrom:(id)arg1 ;
-(int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)arg1 ;
-(void)clearCursors;
-(NTPBFeedRefreshSessionForYouConfig *)forYouConfig;
-(BOOL)hasForYouConfig;
-(id)cursorsAtIndex:(unsigned long long)arg1 ;
-(void)setReachedEnd:(BOOL)arg1 ;
-(void)addActiveGroupEmitterIDRefs:(int)arg1 ;
-(NSMutableArray *)cursors;
-(id)description;
-(void)clearActiveGroupEmitterIDRefs;
-(NSMutableArray *)pendingGroups;
-(void)setActiveGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setIsOffline:(BOOL)arg1 ;
-(void)setRefreshDate:(NTPBDate *)arg1 ;
-(BOOL)hasReachedEnd;
-(int*)activeGroupEmitterIDRefs;
-(void)clearPendingGroups;
-(void)setForYouConfig:(NTPBFeedRefreshSessionForYouConfig *)arg1 ;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasIsOffline;
-(void)setLastCompletedEdition:(NTPBFeedViewportEdition *)arg1 ;
-(void)setPendingGroups:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)addGroupEmitterIDRef:(int)arg1 ;
-(id)pendingGroupsAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)pendingGroupsCount;
-(void)setHasIsOffline:(BOOL)arg1 ;
-(unsigned long long)cursorsCount;
-(BOOL)hasModificationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasReachedEnd:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NTPBFeedViewportEdition *)lastCompletedEdition;
-(int)groupEmitterIDRefAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)groupEmitterIDRefsCount;
@end

