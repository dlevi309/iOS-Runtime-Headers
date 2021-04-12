/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary, NSDate;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {

	NSArray* _cacheMissItemIdentifiers;
	NSMutableDictionary* _itemIdentifierToStoreItemMetadata;
	BOOL _finalResponse;
	NSArray* _lastBatchItemIdentifiers;
	NSArray* _requestItemIdentifiers;

}

@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;              //@synthesize finalResponse=_finalResponse - In the implementation block
@property (nonatomic,copy) NSArray * cacheMissItemIdentifiers;                       //@synthesize cacheMissItemIdentifiers=_cacheMissItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * requestItemIdentifiers;                         //@synthesize requestItemIdentifiers=_requestItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * lastBatchItemIdentifiers;                       //@synthesize lastBatchItemIdentifiers=_lastBatchItemIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@property (nonatomic,copy,readonly) NSDate * earliestExpirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExpired;
-(NSArray *)itemIdentifiers;
-(NSArray *)cacheMissItemIdentifiers;
-(NSDate *)earliestExpirationDate;
-(id)storeItemMetadataForItemIdentifier:(id)arg1 ;
-(id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(BOOL*)arg2 ;
-(void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(BOOL)isFinalResponse;
-(void)setFinalResponse:(BOOL)arg1 ;
-(NSArray *)lastBatchItemIdentifiers;
-(void)setLastBatchItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)requestItemIdentifiers;
-(void)setRequestItemIdentifiers:(NSArray *)arg1 ;
-(void)setCacheMissItemIdentifiers:(NSArray *)arg1 ;
@end

