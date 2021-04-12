/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSArray;


@protocol NUPaging <NSObject>
@property (nonatomic,readonly) id<NUPage> firstPage; 
@property (nonatomic,readonly) id<NUPage> lastPage; 
@property (nonatomic,readonly) NSArray * allPages; 
@required
-(id<NUPage>)lastPage;
-(NSArray *)allPages;
-(id)pageForIdentifier:(id)arg1;
-(id)pageBeforeForIdentifier:(id)arg1;
-(id)pageAfterIdentifier:(id)arg1;
-(void)forEachPage:(/*^block*/id)arg1;
-(id<NUPage>)firstPage;

@end

