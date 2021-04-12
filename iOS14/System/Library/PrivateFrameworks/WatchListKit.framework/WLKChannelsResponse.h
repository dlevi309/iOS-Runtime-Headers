/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)filtered;
-(void)setChannels:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(void)setFiltered:(BOOL)arg1 ;
-(NSDictionary *)channels;
-(NSArray *)orderedChannels;
-(unsigned long long)environmentHash;
-(id)initWithDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 filtered:(BOOL)arg4 ;
-(BOOL)isValidForFiltered:(BOOL)arg1 ;
-(void)setEnvironmentHash:(unsigned long long)arg1 ;
-(void)setOrderedChannels:(NSArray *)arg1 ;
@end

