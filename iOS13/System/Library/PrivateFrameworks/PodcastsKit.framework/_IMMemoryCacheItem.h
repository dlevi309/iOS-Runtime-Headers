/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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
-(id)description;
-(NSString *)key;
-(id)item;
-(void)setItem:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(unsigned long long)cost;
-(void)setCost:(unsigned long long)arg1 ;
-(void)setConformsToProtocol:(BOOL)arg1 ;
-(BOOL)conformsToProtocol;
@end

