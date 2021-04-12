/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@interface NMSMediaContainerQuotaData : NSObject {

	id _quotaRefObj;
	unsigned long long _numItemsAdded;
	unsigned long long _numItemsSkipped;
	unsigned long long _numItemsRemoved;

}

@property (assign,nonatomic) unsigned long long numItemsAdded;                     //@synthesize numItemsAdded=_numItemsAdded - In the implementation block
@property (assign,nonatomic) unsigned long long numItemsSkipped;                   //@synthesize numItemsSkipped=_numItemsSkipped - In the implementation block
@property (assign,nonatomic) unsigned long long numItemsRemoved;                   //@synthesize numItemsRemoved=_numItemsRemoved - In the implementation block
@property (assign,nonatomic,__weak) id quotaRefObj;                                //@synthesize quotaRefObj=_quotaRefObj - In the implementation block
@property (nonatomic,readonly) unsigned long long numItemsAboveQuota; 
-(unsigned long long)numItemsAboveQuota;
-(id)quotaRefObj;
-(unsigned long long)numItemsAdded;
-(unsigned long long)numItemsSkipped;
-(void)setNumItemsSkipped:(unsigned long long)arg1 ;
-(unsigned long long)numItemsRemoved;
-(void)setNumItemsRemoved:(unsigned long long)arg1 ;
-(void)setNumItemsAdded:(unsigned long long)arg1 ;
-(void)setQuotaRefObj:(id)arg1 ;
@end

