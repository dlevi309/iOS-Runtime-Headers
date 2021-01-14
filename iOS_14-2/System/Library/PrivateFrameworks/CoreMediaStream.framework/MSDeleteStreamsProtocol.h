/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSMutableArray;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {

	MSDSPCContext* _context;
	NSMutableArray* _collectionsInFlight;

}

@property (assign,nonatomic) id<MSDeleteStreamsProtocolDelegate> delegate; 
-(void)abort;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_resetConnectionVariables;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)sendDeletionRequestForAssetCollections:(id)arg1 ;
@end

