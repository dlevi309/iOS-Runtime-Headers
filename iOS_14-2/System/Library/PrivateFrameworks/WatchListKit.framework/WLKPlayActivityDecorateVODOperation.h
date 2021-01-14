/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, NSDictionary;

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation {

	NSArray* _playActivityIdentifiers;
	NSDictionary* _metadataByIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * playActivityIdentifiers;                //@synthesize playActivityIdentifiers=_playActivityIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadataByIdentifier;              //@synthesize metadataByIdentifier=_metadataByIdentifier - In the implementation block
+(id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)processResponse;
-(NSArray *)playActivityIdentifiers;
-(NSDictionary *)metadataByIdentifier;
@end

