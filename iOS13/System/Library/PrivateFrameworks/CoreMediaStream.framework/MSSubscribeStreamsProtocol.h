/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@interface MSSubscribeStreamsProtocol : MSStreamsProtocol {

	MSSSPCContext* _context;
	int _chunkIndex;
	_MSSSPCChunkParsingContext* _parseContext;

}
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)abort;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(id)_pathToChunkIndex:(int)arg1 ;
-(void)pollForSubscriptionUpdatesWithAccountAnchors:(id)arg1 ;
-(void)_coreProtocolDidFinishError:(id)arg1 ;
-(void)_coreProtocolDidGetDataChunk:(id)arg1 ;
-(void)_coreProtocolDidFailAuthentication:(id)arg1 ;
-(void)_parseChunks;
-(void)_parseNextChunk;
-(void)_chunkDidBeginStreamForPersonID:(id)arg1 wasReset:(BOOL)arg2 metadata:(id)arg3 ;
-(void)_chunkDidParseAssetCollections:(id)arg1 forPersonID:(id)arg2 ;
-(void)_chunkDidEndStreamForPersonID:(id)arg1 ctag:(id)arg2 ;
-(void)_chunkDidFindSubscriptionGoneForPersonID:(id)arg1 ;
-(void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(id)arg1 ;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 suggestion:(id)arg2 ;
-(id)_assetFromCoreDictionary:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(id)_assetCollectionsFromCoreArray:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
@end

