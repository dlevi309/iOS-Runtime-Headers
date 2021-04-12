/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL, NSString, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRoomRequest : MPStoreModelRequest {

	NSURL* _loadAdditionalContentURL;
	NSString* _roomID;
	MPModelStoreBrowseResponse* _previousRetrievedNestedResponse;
	MPModelStoreBrowseResponse* _previousResponse;

}

@property (nonatomic,copy) NSURL * loadAdditionalContentURL;                                            //@synthesize loadAdditionalContentURL=_loadAdditionalContentURL - In the implementation block
@property (nonatomic,copy) NSString * roomID;                                                           //@synthesize roomID=_roomID - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousRetrievedNestedResponse;              //@synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousResponse;                             //@synthesize previousResponse=_previousResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(MPModelStoreBrowseResponse *)previousRetrievedNestedResponse;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLoadAdditionalContentURL:(NSURL *)arg1 ;
-(void)setPreviousResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(void)setPreviousRetrievedNestedResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(MPModelStoreBrowseResponse *)previousResponse;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)roomID;
-(NSURL *)loadAdditionalContentURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRoomID:(NSString *)arg1 ;
-(void)configureWithParentSection:(id)arg1 ;
@end

