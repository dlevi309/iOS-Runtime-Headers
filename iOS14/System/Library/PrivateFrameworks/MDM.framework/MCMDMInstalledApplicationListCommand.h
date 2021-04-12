/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/


@protocol MCMDMAppItemsDataSource;
@class NSDictionary, NSSet;

@interface MCMDMInstalledApplicationListCommand : NSObject {

	BOOL _isUserEnrollment;
	BOOL _shouldReturnManagedAppsOnly;
	id<MCMDMAppItemsDataSource> _dataSource;
	NSDictionary* _request;
	NSSet* _appsRequested;
	NSSet* _itemsRequested;
	NSDictionary* _appItems;
	NSDictionary* _response;

}

@property (assign,nonatomic) BOOL isUserEnrollment;                               //@synthesize isUserEnrollment=_isUserEnrollment - In the implementation block
@property (nonatomic,retain) id<MCMDMAppItemsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSSet * appsRequested;                                 //@synthesize appsRequested=_appsRequested - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnManagedAppsOnly;                    //@synthesize shouldReturnManagedAppsOnly=_shouldReturnManagedAppsOnly - In the implementation block
@property (nonatomic,copy) NSSet * itemsRequested;                                //@synthesize itemsRequested=_itemsRequested - In the implementation block
@property (nonatomic,copy) NSDictionary * appItems;                               //@synthesize appItems=_appItems - In the implementation block
@property (nonatomic,copy) NSDictionary * response;                               //@synthesize response=_response - In the implementation block
+(id)allItems;
+(id)itemsThatMustAlwaysBeReturned;
-(void)setRequest:(NSDictionary *)arg1 ;
-(id<MCMDMAppItemsDataSource>)dataSource;
-(NSDictionary *)request;
-(void)setIsUserEnrollment:(BOOL)arg1 ;
-(void)setDataSource:(id<MCMDMAppItemsDataSource>)arg1 ;
-(NSDictionary *)response;
-(BOOL)isUserEnrollment;
-(void)setResponse:(NSDictionary *)arg1 ;
-(void)_reset;
-(id)responseForRequest:(id)arg1 ;
-(void)_processArguments;
-(void)fetchAppProperties;
-(NSDictionary *)appItems;
-(void)setAppsRequested:(NSSet *)arg1 ;
-(void)setShouldReturnManagedAppsOnly:(BOOL)arg1 ;
-(void)setItemsRequested:(NSSet *)arg1 ;
-(void)_processIdentifiersArgument;
-(void)_processManagedAppsOnlyArgument;
-(void)_processItemsArgument;
-(void)_validateRequestDictionaryIsPresentAndADictionary;
-(NSSet *)appsRequested;
-(BOOL)shouldReturnManagedAppsOnly;
-(NSSet *)itemsRequested;
-(void)setAppItems:(NSDictionary *)arg1 ;
@end

