/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSManagedObjectContext, NSString, NSDictionary;

@interface PLGlobalValues : NSObject {

	NSManagedObjectContext* _moc;

}

@property (assign,nonatomic) BOOL didImportFileSystemAssets; 
@property (assign,getter=isJournalRebuildRequired,nonatomic) BOOL journalRebuildRequired; 
@property (nonatomic,readonly) BOOL isRebuildComplete; 
@property (nonatomic,retain) NSString * localeIdentifier; 
@property (nonatomic,retain) NSDictionary * greenValues; 
@property (nonatomic,readonly) unsigned long long libraryCreateOptions; 
+(void)setJournalRebuildRequired:(BOOL)arg1 managedObjectContext:(id)arg2 ;
+(void)setLibraryCreateOptions:(unsigned long long)arg1 managedObjectContext:(id)arg2 ;
-(NSString *)localeIdentifier;
-(unsigned long long)libraryCreateOptions;
-(void)setWidgetTimelineGeneratedForDisplaySize:(CGSize)arg1 ;
-(id)_getValueUsingPerformBlockAndWait:(/*^block*/id)arg1 ;
-(void)_setDidImportFileSystemAssets:(BOOL)arg1 ;
-(void)setGreenValues:(NSDictionary *)arg1 ;
-(void)setDidImportFileSystemAssets:(BOOL)arg1 ;
-(BOOL)didImportFileSystemAssets;
-(void)setRebuildComplete;
-(void)_setValueUsingPerformBlockAndWait:(/*^block*/id)arg1 responsibleCaller:(const char*)arg2 ;
-(BOOL)isRebuildComplete;
-(BOOL)shouldPrefetchWidgetResources;
-(void)_setRebuildComplete;
-(void)dontImportFileSystemDataIntoDatabase;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(void)setJournalRebuildRequired:(BOOL)arg1 ;
-(BOOL)isJournalRebuildRequired;
-(NSDictionary *)greenValues;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
@end

