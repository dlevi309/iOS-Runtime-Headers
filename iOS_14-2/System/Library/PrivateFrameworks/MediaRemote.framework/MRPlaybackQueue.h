/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, MRPlayerPath, _MRPlaybackQueueContextProtobuf, NSData, NSDictionary;

@interface MRPlaybackQueue : NSObject <NSCopying> {

	BOOL _hasLocation;
	BOOL _sendingPlaybackQueueTransaction;
	BOOL _hasSendingPlaybackQueueTransaction;
	long long _location;
	NSString* _requestIdentifier;
	NSString* _queueIdentifier;
	NSArray* _contentItems;
	MRPlayerPath* _resolvedPlayerPath;
	_MRPlaybackQueueContextProtobuf* _context;

}

@property (assign,nonatomic) long long location;                                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                            //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) BOOL sendingPlaybackQueueTransaction;                        //@synthesize sendingPlaybackQueueTransaction=_sendingPlaybackQueueTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasSendingPlaybackQueueTransaction;                     //@synthesize hasSendingPlaybackQueueTransaction=_hasSendingPlaybackQueueTransaction - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                                    //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * contentItems;                                        //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,retain) MRPlayerPath * resolvedPlayerPath;                           //@synthesize resolvedPlayerPath=_resolvedPlayerPath - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSArray * contentItemIdentifiers; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,copy,readonly) NSString * minimalReadableDescription; 
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(MRPlayerPath *)resolvedPlayerPath;
-(id)contentItemForIdentifier:(id)arg1 ;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(NSArray *)contentItems;
-(NSString *)requestIdentifier;
-(BOOL)sendingPlaybackQueueTransaction;
-(NSRange)range;
-(id)initWithContentItems:(id)arg1 location:(unsigned long long)arg2 ;
-(long long)location;
-(id)initWithContentItem:(id)arg1 ;
-(BOOL)hasSendingPlaybackQueueTransaction;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setHasSendingPlaybackQueueTransaction:(BOOL)arg1 ;
-(void)setLocation:(long long)arg1 ;
-(void)setSendingPlaybackQueueTransaction:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(NSData *)data;
-(NSArray *)contentItemIdentifiers;
-(id)contentItemWithOffset:(unsigned long long)arg1 ;
-(NSString *)minimalReadableDescription;
-(void)setContentItems:(NSArray *)arg1 ;
-(id)initWithContentItems:(id)arg1 ;
-(void)setResolvedPlayerPath:(MRPlayerPath *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

