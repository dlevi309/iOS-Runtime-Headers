/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSNumber;

@interface NMSQuotaEvaluationState : NSObject {

	NSNumber* _identifer;
	unsigned long long _itemSize;
	unsigned long long _listTotalSize;
	unsigned long long _listQuota;
	long long _containerIndex;
	long long _itemIndex;

}

@property (nonatomic,retain) NSNumber * identifer;                          //@synthesize identifer=_identifer - In the implementation block
@property (assign,nonatomic) unsigned long long itemSize;                   //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) unsigned long long listTotalSize;              //@synthesize listTotalSize=_listTotalSize - In the implementation block
@property (assign,nonatomic) unsigned long long listQuota;                  //@synthesize listQuota=_listQuota - In the implementation block
@property (assign,nonatomic) long long containerIndex;                      //@synthesize containerIndex=_containerIndex - In the implementation block
@property (assign,nonatomic) long long itemIndex;                           //@synthesize itemIndex=_itemIndex - In the implementation block
-(unsigned long long)itemSize;
-(void)setItemSize:(unsigned long long)arg1 ;
-(long long)itemIndex;
-(void)setItemIndex:(long long)arg1 ;
-(NSNumber *)identifer;
-(void)setIdentifer:(NSNumber *)arg1 ;
-(void)setContainerIndex:(long long)arg1 ;
-(long long)containerIndex;
-(unsigned long long)listTotalSize;
-(void)setListTotalSize:(unsigned long long)arg1 ;
-(unsigned long long)listQuota;
-(void)setListQuota:(unsigned long long)arg1 ;
@end

