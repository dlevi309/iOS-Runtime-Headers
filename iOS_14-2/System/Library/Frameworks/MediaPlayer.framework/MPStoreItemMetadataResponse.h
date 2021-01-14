/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary, NSMutableArray, NSDate;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {

	NSArray* _cacheMissItemIdentifiers;
	NSMutableDictionary* _itemIdentifierToStoreItemMetadata;
	NSMutableArray* _allStoreItemDictionaries;
	BOOL _finalResponse;
	NSArray* _lastBatchItemIdentifiers;
	NSArray* _requestItemIdentifiers;

}

@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;              //@synthesize finalResponse=_finalResponse - In the implementation block
@property (nonatomic,copy) NSArray * cacheMissItemIdentifiers;                       //@synthesize cacheMissItemIdentifiers=_cacheMissItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * requestItemIdentifiers;                         //@synthesize requestItemIdentifiers=_requestItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * lastBatchItemIdentifiers;                       //@synthesize lastBatchItemIdentifiers=_lastBatchItemIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allStoreItemDictionaries; 
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@property (nonatomic,copy,readonly) NSDate * earliestExpirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(NSArray *)itemIdentifiers;
-(id)init;
-(BOOL)isFinalResponse;
-(id)storeItemMetadataForItemIdentifier:(id)arg1 ;
-(NSArray *)cacheMissItemIdentifiers;
-(NSArray *)allStoreItemDictionaries;
-(NSDate *)earliestExpirationDate;
-(void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)setLastBatchItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)lastBatchItemIdentifiers;
-(void)setCacheMissItemIdentifiers:(NSArray *)arg1 ;
-(BOOL)isExpired;
-(NSArray *)requestItemIdentifiers;
-(void)setFinalResponse:(BOOL)arg1 ;
-(void)setRequestItemIdentifiers:(NSArray *)arg1 ;
-(id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(BOOL*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

