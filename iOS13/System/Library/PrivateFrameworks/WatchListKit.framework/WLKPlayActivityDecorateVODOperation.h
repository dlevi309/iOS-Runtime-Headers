/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)processResponse;
-(NSArray *)playActivityIdentifiers;
-(NSDictionary *)metadataByIdentifier;
@end

