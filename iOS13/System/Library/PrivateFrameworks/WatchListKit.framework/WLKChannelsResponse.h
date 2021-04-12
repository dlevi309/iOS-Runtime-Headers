/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSArray, NSDictionary, NSDate;

@interface WLKChannelsResponse : NSObject {

	BOOL _filtered;
	NSArray* _orderedChannels;
	NSDictionary* _channels;
	NSDate* _expirationDate;
	unsigned long long _environmentHash;

}

@property (nonatomic,copy) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL filtered;                                   //@synthesize filtered=_filtered - In the implementation block
@property (assign,nonatomic) unsigned long long environmentHash;              //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,retain) NSArray * orderedChannels;                       //@synthesize orderedChannels=_orderedChannels - In the implementation block
@property (nonatomic,retain) NSDictionary * channels;                         //@synthesize channels=_channels - In the implementation block
+(id)parseChannelsFromPayload:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDictionary *)channels;
-(void)setChannels:(NSDictionary *)arg1 ;
-(BOOL)filtered;
-(void)setFiltered:(BOOL)arg1 ;
-(NSArray *)orderedChannels;
-(unsigned long long)environmentHash;
-(id)initWithDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 filtered:(BOOL)arg4 ;
-(BOOL)isValidForFiltered:(BOOL)arg1 ;
-(void)setEnvironmentHash:(unsigned long long)arg1 ;
-(void)setOrderedChannels:(NSArray *)arg1 ;
@end

