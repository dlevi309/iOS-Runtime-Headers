/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class PVTaskTokenPool;

@interface PVTaskToken : NSObject {

	BOOL _returned;
	PVTaskTokenPool* _pool;
	unsigned long long _tokenId;

}

@property (assign,nonatomic) BOOL returned;                                //@synthesize returned=_returned - In the implementation block
@property (nonatomic,__weak,readonly) PVTaskTokenPool * pool;              //@synthesize pool=_pool - In the implementation block
@property (nonatomic,readonly) unsigned long long tokenId;                 //@synthesize tokenId=_tokenId - In the implementation block
-(void)dealloc;
-(void)returnToPool;
-(PVTaskTokenPool *)pool;
-(void)setReturned:(BOOL)arg1 ;
-(BOOL)returned;
-(id)initWithPool:(id)arg1 tokenId:(unsigned long long)arg2 ;
-(unsigned long long)tokenId;
@end

