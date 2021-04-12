/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSIndexSet;

@interface PXVisualPositionsChangeDetails : NSObject {

	long long _countBeforeChanges;
	long long _anchorIndexBeforeChanges;
	NSIndexSet* _headerIndexesBeforeChanges;
	long long _countAfterChanges;
	long long _anchorIndexAfterChanges;
	NSIndexSet* _headerIndexesAfterChanges;
	long long _anchorBodyIndexBeforeChanges;
	long long _anchorBodyIndexAfterChanges;

}

@property (nonatomic,readonly) long long anchorBodyIndexBeforeChanges;               //@synthesize anchorBodyIndexBeforeChanges=_anchorBodyIndexBeforeChanges - In the implementation block
@property (nonatomic,readonly) long long anchorBodyIndexAfterChanges;                //@synthesize anchorBodyIndexAfterChanges=_anchorBodyIndexAfterChanges - In the implementation block
@property (nonatomic,readonly) long long countBeforeChanges;                         //@synthesize countBeforeChanges=_countBeforeChanges - In the implementation block
@property (nonatomic,readonly) long long anchorIndexBeforeChanges;                   //@synthesize anchorIndexBeforeChanges=_anchorIndexBeforeChanges - In the implementation block
@property (nonatomic,readonly) NSIndexSet * headerIndexesBeforeChanges;              //@synthesize headerIndexesBeforeChanges=_headerIndexesBeforeChanges - In the implementation block
@property (nonatomic,readonly) long long countAfterChanges;                          //@synthesize countAfterChanges=_countAfterChanges - In the implementation block
@property (nonatomic,readonly) long long anchorIndexAfterChanges;                    //@synthesize anchorIndexAfterChanges=_anchorIndexAfterChanges - In the implementation block
@property (nonatomic,readonly) NSIndexSet * headerIndexesAfterChanges;               //@synthesize headerIndexesAfterChanges=_headerIndexesAfterChanges - In the implementation block
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5 anchorReload:(long long)arg6 ;
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5 ;
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorFan:(long long)arg7 anchorReload:(long long)arg8 ;
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 ;
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 headerIndexesBeforeChanges:(id)arg4 countAfterChanges:(long long)arg5 anchorIndexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7 ;
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorRemoved:(long long)arg4 indexAfterChanges:(long long)arg5 ;
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorRemoved:(long long)arg5 indexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7 ;
+(id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 reloadAllIncludingAnchor:(BOOL)arg7 ;
-(id)init;
-(SCD_Struct_PX112)bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1 ;
-(SCD_Struct_PX112)visualPositionAfterApplyingChangesToIndex:(long long)arg1 ;
-(id)arrayChangeDetailsWithItemsChanged:(BOOL)arg1 ;
-(SCD_Struct_PX112)visualPositionAfterRevertingChangesFromIndex:(long long)arg1 ;
-(long long)countBeforeChanges;
-(long long)anchorIndexBeforeChanges;
-(NSIndexSet *)headerIndexesBeforeChanges;
-(long long)countAfterChanges;
-(long long)anchorIndexAfterChanges;
-(NSIndexSet *)headerIndexesAfterChanges;
-(long long)anchorBodyIndexBeforeChanges;
-(long long)anchorBodyIndexAfterChanges;
-(id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 ;
-(SCD_Struct_PX112)bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1 ;
@end

