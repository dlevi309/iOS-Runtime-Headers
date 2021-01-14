/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PVTaskTokenPool *)pool;
-(void)returnToPool;
-(unsigned long long)tokenId;
-(void)dealloc;
-(void)setReturned:(BOOL)arg1 ;
-(BOOL)returned;
-(id)initWithPool:(id)arg1 tokenId:(unsigned long long)arg2 ;
@end

