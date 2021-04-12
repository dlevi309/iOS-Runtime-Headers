/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGadgetRankStorage
@required
-(void)resetStoredRanks;
-(BOOL)hasAnyStoredRank;
-(unsigned long long)gadgetTypeForRank:(long long)arg1;
-(long long)rankForGadgetType:(unsigned long long)arg1;
-(void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2;

@end

