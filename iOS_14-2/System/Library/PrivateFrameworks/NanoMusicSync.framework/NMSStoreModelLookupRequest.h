/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest {

	NSArray* _containerIDs;

}

@property (nonatomic,copy) NSArray * containerIDs;              //@synthesize containerIDs=_containerIDs - In the implementation block
-(void)setContainerIDs:(NSArray *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)containerIDs;
@end

