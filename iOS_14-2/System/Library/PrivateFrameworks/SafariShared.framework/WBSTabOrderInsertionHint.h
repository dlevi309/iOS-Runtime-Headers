/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSOrderedTab;
@interface WBSTabOrderInsertionHint : NSObject {

	id<WBSOrderedTab> _tabToInsertAfter;
	unsigned long long _insertionIndex;
	unsigned long long _relationType;

}

@property (nonatomic,readonly) id<WBSOrderedTab> tabToInsertAfter;              //@synthesize tabToInsertAfter=_tabToInsertAfter - In the implementation block
@property (nonatomic,readonly) unsigned long long insertionIndex;               //@synthesize insertionIndex=_insertionIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long relationType;                 //@synthesize relationType=_relationType - In the implementation block
-(id<WBSOrderedTab>)tabToInsertAfter;
-(id)initWithTabToInsertAfter:(id)arg1 insertionIndex:(unsigned long long)arg2 relation:(unsigned long long)arg3 ;
-(id)initWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2 ;
-(unsigned long long)insertionIndex;
-(unsigned long long)relationType;
@end

