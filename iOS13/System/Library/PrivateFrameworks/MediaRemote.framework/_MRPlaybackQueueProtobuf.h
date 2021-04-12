/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MRPlaybackQueueContextProtobuf, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	_MRPlaybackQueueContextProtobuf* _context;
	int _location;
	NSString* _queueIdentifier;
	NSString* _requestID;
	_MRNowPlayingPlayerPathProtobuf* _resolvedPlayerPath;
	BOOL _sendingPlaybackQueueTransaction;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;                                     //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) _MRPlaybackQueueContextProtobuf * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestID; 
@property (nonatomic,retain) NSString * requestID;                                              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) BOOL hasResolvedPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * resolvedPlayerPath;              //@synthesize resolvedPlayerPath=_resolvedPlayerPath - In the implementation block
@property (assign,nonatomic) BOOL hasSendingPlaybackQueueTransaction; 
@property (assign,nonatomic) BOOL sendingPlaybackQueueTransaction;                              //@synthesize sendingPlaybackQueueTransaction=_sendingPlaybackQueueTransaction - In the implementation block
@property (nonatomic,readonly) BOOL hasQueueIdentifier; 
@property (nonatomic,retain) NSString * queueIdentifier;                                        //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
+(Class)contentItemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_MRPlaybackQueueContextProtobuf *)context;
-(int)location;
-(void)setContext:(_MRPlaybackQueueContextProtobuf *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(int)arg1 ;
-(BOOL)hasLocation;
-(BOOL)hasContext;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentItems;
-(BOOL)hasRequestID;
-(BOOL)hasQueueIdentifier;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(_MRNowPlayingPlayerPathProtobuf *)resolvedPlayerPath;
-(void)setResolvedPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasSendingPlaybackQueueTransaction;
-(BOOL)sendingPlaybackQueueTransaction;
-(void)setSendingPlaybackQueueTransaction:(BOOL)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasResolvedPlayerPath;
-(void)setHasSendingPlaybackQueueTransaction:(BOOL)arg1 ;
@end

