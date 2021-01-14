/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSDate, NSArray, NSMutableArray;

@interface PXImportSessionInfo : NSObject {

	BOOL _importComplete;
	BOOL _importStopped;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _itemsToImport;
	NSMutableArray* _importedItems;
	NSMutableArray* _errorItems;
	long long _completedItemsCount;

}

@property (nonatomic,retain) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * itemsToImport;                     //@synthesize itemsToImport=_itemsToImport - In the implementation block
@property (assign,nonatomic) BOOL importComplete;                         //@synthesize importComplete=_importComplete - In the implementation block
@property (assign,nonatomic) BOOL importStopped;                          //@synthesize importStopped=_importStopped - In the implementation block
@property (nonatomic,retain) NSMutableArray * importedItems;              //@synthesize importedItems=_importedItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * errorItems;                 //@synthesize errorItems=_errorItems - In the implementation block
@property (assign,nonatomic) long long completedItemsCount;               //@synthesize completedItemsCount=_completedItemsCount - In the implementation block
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)importStopped;
-(NSArray *)itemsToImport;
-(void)setItemsToImport:(NSArray *)arg1 ;
-(BOOL)importComplete;
-(void)setImportComplete:(BOOL)arg1 ;
-(void)setImportStopped:(BOOL)arg1 ;
-(NSMutableArray *)errorItems;
-(void)setErrorItems:(NSMutableArray *)arg1 ;
-(long long)completedItemsCount;
-(void)setCompletedItemsCount:(long long)arg1 ;
-(NSMutableArray *)importedItems;
-(void)setImportedItems:(NSMutableArray *)arg1 ;
@end

