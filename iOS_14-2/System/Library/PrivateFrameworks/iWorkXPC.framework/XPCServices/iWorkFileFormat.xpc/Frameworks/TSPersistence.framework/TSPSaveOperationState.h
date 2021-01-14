/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSMapTable, NSHashTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	NSHashTable* _remoteData;
	int _sampleID;
	long long _updateType;

}

@property (nonatomic,readonly) BOOL shouldUpdate; 
@property (nonatomic,readonly) BOOL isSavingCurrentDocument; 
@property (nonatomic,readonly) BOOL inheritAttributes; 
@property (nonatomic,readonly) long long updateType;                      //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteData; 
@property (assign,nonatomic) int sampleID;                                //@synthesize sampleID=_sampleID - In the implementation block
-(id)init;
-(long long)updateType;
-(BOOL)shouldUpdate;
-(BOOL)hasRemoteData;
-(id)initWithUpdateType:(long long)arg1 ;
-(void)setSampleID:(int)arg1 ;
-(BOOL)isSavingCurrentDocument;
-(BOOL)inheritAttributes;
-(int)sampleID;
-(BOOL)hasNewStorageForData:(id)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(void)addRemoteData:(id)arg1 ;
@end

