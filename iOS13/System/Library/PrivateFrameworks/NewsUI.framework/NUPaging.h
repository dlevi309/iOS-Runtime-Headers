/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSArray;


@protocol NUPaging <NSObject>
@property (nonatomic,readonly) id<NUPage> firstPage; 
@property (nonatomic,readonly) id<NUPage> lastPage; 
@property (nonatomic,readonly) NSArray * allPages; 
@required
-(id<NUPage>)firstPage;
-(id<NUPage>)lastPage;
-(NSArray *)allPages;
-(id)pageForIdentifier:(id)arg1;
-(id)pageBeforeForIdentifier:(id)arg1;
-(id)pageAfterIdentifier:(id)arg1;
-(void)forEachPage:(/*^block*/id)arg1;

@end

