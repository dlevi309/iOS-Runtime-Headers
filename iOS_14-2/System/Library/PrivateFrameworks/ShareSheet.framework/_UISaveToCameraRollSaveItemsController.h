/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSArray, NSError;

@interface _UISaveToCameraRollSaveItemsController : NSObject {

	BOOL _successToReport;
	/*^block*/id _saveCompletionBlock;
	NSArray* _itemsToSchedule;
	long long _pendingSaveCount;
	NSError* _errorToReport;

}

@property (nonatomic,readonly) id saveCompletionBlock;                  //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToSchedule;               //@synthesize itemsToSchedule=_itemsToSchedule - In the implementation block
@property (nonatomic,readonly) long long pendingSaveCount;              //@synthesize pendingSaveCount=_pendingSaveCount - In the implementation block
@property (nonatomic,readonly) NSError * errorToReport;                 //@synthesize errorToReport=_errorToReport - In the implementation block
@property (nonatomic,readonly) BOOL successToReport;                    //@synthesize successToReport=_successToReport - In the implementation block
-(id)saveCompletionBlock;
-(void)beginSaving;
-(id)initWithItems:(id)arg1 saveCompletionBlock:(/*^block*/id)arg2 ;
-(void)beginSavingItem:(id)arg1 ;
-(void)_didCompleteSavingItem:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_noteDidCompleteSavingItem:(id)arg1 error:(id)arg2 ;
-(void)_invokeSaveCompletionBlock;
-(NSArray *)itemsToSchedule;
-(long long)pendingSaveCount;
-(NSError *)errorToReport;
-(BOOL)successToReport;
@end

