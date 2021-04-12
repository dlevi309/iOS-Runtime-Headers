/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXGadgetRankStorage.h>

@class NSString;

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage> {

	NSString* _prefix;

}
+(id)rankableGadgetTypes;
+(id)defaultStorage;
+(id)customStorage;
-(void)resetStoredRanks;
-(id)init;
-(BOOL)hasAnyStoredRank;
-(unsigned long long)gadgetTypeForRank:(long long)arg1 ;
-(long long)rankForGadgetType:(unsigned long long)arg1 ;
-(void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2 ;
-(id)_keyForGadgetType:(unsigned long long)arg1 ;
-(id)_initWithPrefix:(id)arg1 ;
@end

