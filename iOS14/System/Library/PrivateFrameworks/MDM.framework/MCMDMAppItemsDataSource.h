/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/

@class NSSet, NSDictionary;


@protocol MCMDMAppItemsDataSource <NSObject>
@property (nonatomic,copy) NSSet * appsRequested; 
@property (assign,nonatomic) BOOL shouldReturnManagedAppsOnly; 
@property (nonatomic,copy) NSSet * itemsRequested; 
@property (nonatomic,copy) NSDictionary * appItems; 
@required
-(NSDictionary *)appItems;
-(void)setAppsRequested:(id)arg1;
-(void)setShouldReturnManagedAppsOnly:(BOOL)arg1;
-(void)setItemsRequested:(id)arg1;
-(NSSet *)appsRequested;
-(BOOL)shouldReturnManagedAppsOnly;
-(NSSet *)itemsRequested;
-(void)fetchAppItems;
-(void)setAppItems:(id)arg1;

@end

