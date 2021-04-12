/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest {

	NSArray* _containerIDs;

}

@property (nonatomic,copy) NSArray * containerIDs;              //@synthesize containerIDs=_containerIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(NSArray *)containerIDs;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
@end

