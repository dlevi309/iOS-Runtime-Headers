/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableDictionary, PXDataSection, PXNavigationListDataSection;

@interface PXNavigationListDataSubsection : NSObject {

	NSMutableDictionary* _listItemsCache;
	BOOL _skipAssetCountFetches;
	PXDataSection* _dataSection;
	PXNavigationListDataSection* _listDataSection;
	long long _indentationLevel;
	long long _indexDelta;
	long long _expandedIndex;
	long long _externalStartIndex;

}

@property (nonatomic,readonly) PXDataSection * dataSection;                                //@synthesize dataSection=_dataSection - In the implementation block
@property (nonatomic,readonly) PXNavigationListDataSection * listDataSection;              //@synthesize listDataSection=_listDataSection - In the implementation block
@property (nonatomic,readonly) long long indentationLevel;                                 //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,readonly) long long indexDelta;                                       //@synthesize indexDelta=_indexDelta - In the implementation block
@property (nonatomic,readonly) long long expandedIndex;                                    //@synthesize expandedIndex=_expandedIndex - In the implementation block
@property (nonatomic,readonly) long long externalStartIndex;                               //@synthesize externalStartIndex=_externalStartIndex - In the implementation block
@property (nonatomic,readonly) BOOL skipAssetCountFetches;                                 //@synthesize skipAssetCountFetches=_skipAssetCountFetches - In the implementation block
-(PXDataSection *)dataSection;
-(long long)expandedIndex;
-(id)description;
-(id)listItemAtExternalIndex:(long long)arg1 ;
-(long long)indentationLevel;
-(long long)externalStartIndex;
-(id)initWithDataSection:(id)arg1 indexDelta:(long long)arg2 expandedIndex:(long long)arg3 indentationLevel:(long long)arg4 externalStartIndex:(long long)arg5 skipAssetCountFetches:(BOOL)arg6 ;
-(PXNavigationListDataSection *)listDataSection;
-(BOOL)skipAssetCountFetches;
-(long long)indexDelta;
@end

