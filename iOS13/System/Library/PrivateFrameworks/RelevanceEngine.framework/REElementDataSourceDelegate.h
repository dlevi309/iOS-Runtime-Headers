/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REElementDataSourceDelegate <NSObject>
@optional
-(void)addElements:(id)arg1 toSection:(unsigned long long)arg2;
-(void)removeElements:(id)arg1 fromSection:(unsigned long long)arg2;
-(BOOL)hasElementWithId:(id)arg1 inSection:(unsigned long long)arg2;

@required
-(void)invalidateElements;
-(id)elementOperationQueue;
-(void)addElements:(id)arg1 toSectionWithIdentifier:(id)arg2;
-(void)reloadElement:(id)arg1;
-(void)removeElementsWithIds:(id)arg1;
-(void)refreshElement:(id)arg1;
-(BOOL)hasElementWithId:(id)arg1 inSectionWithIdentifier:(id)arg2;
-(void)fetchElementWithIdentifierVisible:(id)arg1 withHandler:(/*^block*/id)arg2;

@end

