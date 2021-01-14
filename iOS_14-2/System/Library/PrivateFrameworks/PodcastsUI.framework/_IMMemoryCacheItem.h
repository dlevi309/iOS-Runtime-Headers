/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@class NSString;

@interface _IMMemoryCacheItem : NSObject {

	id _item;
	unsigned long long _cost;
	unsigned long long _timeStamp;
	NSString* _keyString;
	BOOL _conformsToProtocol;

}

@property (nonatomic,retain) id item;                                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long cost;                   //@synthesize cost=_cost - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) BOOL conformsToProtocol;                   //@synthesize conformsToProtocol=_conformsToProtocol - In the implementation block
+(id)cacheItemWithItem:(id)arg1 key:(id)arg2 cost:(unsigned long long)arg3 ;
-(id)item;
-(unsigned long long)timeStamp;
-(void)setItem:(id)arg1 ;
-(id)description;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(NSString *)key;
-(unsigned long long)cost;
-(void)setCost:(unsigned long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setConformsToProtocol:(BOOL)arg1 ;
-(BOOL)conformsToProtocol;
@end

