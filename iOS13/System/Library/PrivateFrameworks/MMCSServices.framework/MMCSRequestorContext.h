/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(MMCSEngine *)engine;
-(unsigned*)itemFlags;
-(void)setEngine:(MMCSEngine *)arg1 ;
-(unsigned long long*)itemIDs;
-(void)setItemIDs:(unsigned long long*)arg1 ;
-(char**)signatures;
-(void)setItemFlags:(unsigned*)arg1 ;
-(id)initWithEngine:(id)arg1 type:(int)arg2 ;
-(void)setSignatures:(char**)arg1 ;
-(char**)authTokens;
-(void)setAuthTokens:(char**)arg1 ;
@end

