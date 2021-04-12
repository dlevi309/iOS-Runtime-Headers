/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@class MMCSEngine;

@interface MMCSRequestorContext : NSObject {

	int _type;
	MMCSEngine* _engine;
	char** _signatures;
	unsigned long long _count;
	unsigned long long* _itemIDs;
	unsigned* _itemFlags;
	char** _authTokens;

}

@property (assign,nonatomic,__weak) MMCSEngine * engine;               //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long* itemIDs;              //@synthesize itemIDs=_itemIDs - In the implementation block
@property (assign,nonatomic) unsigned* itemFlags;                      //@synthesize itemFlags=_itemFlags - In the implementation block
@property (assign,nonatomic) char** signatures;                        //@synthesize signatures=_signatures - In the implementation block
@property (assign,nonatomic) char** authTokens;                        //@synthesize authTokens=_authTokens - In the implementation block
+(id)contextWithEngine:(id)arg1 type:(int)arg2 ;
-(MMCSEngine *)engine;
-(unsigned*)itemFlags;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setEngine:(MMCSEngine *)arg1 ;
-(unsigned long long*)itemIDs;
-(unsigned long long)count;
-(void)setType:(int)arg1 ;
-(void)setItemFlags:(unsigned*)arg1 ;
-(int)type;
-(void)setItemIDs:(unsigned long long*)arg1 ;
-(char**)signatures;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSignatures:(char**)arg1 ;
-(id)initWithEngine:(id)arg1 type:(int)arg2 ;
-(char**)authTokens;
-(void)setAuthTokens:(char**)arg1 ;
@end

