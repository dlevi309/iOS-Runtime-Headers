/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@interface NMSMediaContainerQuotaData : NSObject {

	BOOL _hasSkippedItems;
	BOOL _hasRemovedItems;
	id _quotaRefObj;
	unsigned long long _numItemsAdded;

}

@property (assign,nonatomic) unsigned long long numItemsAdded;              //@synthesize numItemsAdded=_numItemsAdded - In the implementation block
@property (assign,nonatomic) BOOL hasSkippedItems;                          //@synthesize hasSkippedItems=_hasSkippedItems - In the implementation block
@property (assign,nonatomic) BOOL hasRemovedItems;                          //@synthesize hasRemovedItems=_hasRemovedItems - In the implementation block
@property (assign,nonatomic,__weak) id quotaRefObj;                         //@synthesize quotaRefObj=_quotaRefObj - In the implementation block
@property (nonatomic,readonly) BOOL hasItemsAboveQuota; 
-(BOOL)hasItemsAboveQuota;
-(id)quotaRefObj;
-(unsigned long long)numItemsAdded;
-(void)setHasSkippedItems:(BOOL)arg1 ;
-(void)setHasRemovedItems:(BOOL)arg1 ;
-(void)setNumItemsAdded:(unsigned long long)arg1 ;
-(BOOL)hasSkippedItems;
-(BOOL)hasRemovedItems;
-(void)setQuotaRefObj:(id)arg1 ;
@end

