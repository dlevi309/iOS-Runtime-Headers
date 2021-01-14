/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXTapToRadar.h>

@protocol PXCMMComposeRecipientDataSourceManagerDelegate;
@class NSMutableArray, NSMutableSet, PXCMMPeopleSuggestionsDataSource, PXCMMPeopleSuggestionsDataSourceManager, PXCMMComposeRecipientDataSource, NSDictionary, NSString;

@interface PXCMMComposeRecipientDataSourceManager : NSObject <PXSectionedDataSourceManagerObserver, PXTapToRadar> {

	NSMutableArray* _composeRecipients;
	NSMutableSet* _recipients;
	PXCMMPeopleSuggestionsDataSource* _peopleSuggestionsDataSource;
	PXCMMPeopleSuggestionsDataSourceManager* _peopleSuggestionsDataSourceManager;
	long long _sourceType;
	id<PXCMMComposeRecipientDataSourceManagerDelegate> _delegate;
	PXCMMComposeRecipientDataSource* _dataSource;
	unsigned long long _numberOfPeopleSuggested;

}

@property (nonatomic,retain) PXCMMPeopleSuggestionsDataSource * peopleSuggestionsDataSource;                            //@synthesize peopleSuggestionsDataSource=_peopleSuggestionsDataSource - In the implementation block
@property (nonatomic,retain) PXCMMComposeRecipientDataSource * dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeopleSuggested;                                                //@synthesize numberOfPeopleSuggested=_numberOfPeopleSuggested - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsDataSourceManager * peopleSuggestionsDataSourceManager;              //@synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager - In the implementation block
@property (nonatomic,readonly) long long sourceType;                                                                    //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMComposeRecipientDataSourceManagerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * diagnosticDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(long long)sourceType;
-(NSDictionary *)diagnosticDictionary;
-(id)initWithPeopleSuggestionsDataSourceManager:(id)arg1 sourceType:(long long)arg2 ;
-(id)_createComposeRecipientDataSourceFromCurrentState;
-(id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
-(long long)_lastValidComposeRecipientIndex;
-(void)_addComposeRecipients:(id)arg1 ;
-(void)_replaceComposeRecipientAtIndex:(long long)arg1 withComposeRecipient:(id)arg2 ;
-(PXCMMPeopleSuggestionsDataSource *)peopleSuggestionsDataSource;
-(void)setPeopleSuggestionsDataSource:(PXCMMPeopleSuggestionsDataSource *)arg1 ;
-(void)setPeopleSuggestionsDataSourceManager:(PXCMMPeopleSuggestionsDataSourceManager *)arg1 ;
-(unsigned long long)numberOfPeopleSuggested;
-(void)setNumberOfPeopleSuggested:(unsigned long long)arg1 ;
-(id)init;
-(id<PXCMMComposeRecipientDataSourceManagerDelegate>)delegate;
-(PXCMMComposeRecipientDataSource *)dataSource;
-(PXCMMPeopleSuggestionsDataSourceManager *)peopleSuggestionsDataSourceManager;
-(void)setDelegate:(id<PXCMMComposeRecipientDataSourceManagerDelegate>)arg1 ;
-(void)setDataSource:(PXCMMComposeRecipientDataSource *)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

