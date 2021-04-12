/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, NSString, NSFileVersion, NSDate;

@interface GKSavedGameDocument : NSObject <NSFilePresenter> {

	BOOL _hasConflict;
	BOOL _isConflictVersion;
	NSURL* _fileURL;
	NSString* _name;
	NSFileVersion* _fileVersion;
	NSString* _deviceName;
	NSDate* _modificationDate;

}

@property (nonatomic,retain) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSFileVersion * fileVersion;                                //@synthesize fileVersion=_fileVersion - In the implementation block
@property (assign,nonatomic) BOOL hasConflict;                                           //@synthesize hasConflict=_hasConflict - In the implementation block
@property (assign,nonatomic) BOOL isConflictVersion;                                     //@synthesize isConflictVersion=_isConflictVersion - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDeviceName;
-(NSDate *)modificationDate;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)deviceName;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(NSFileVersion *)fileVersion;
-(void)setFileVersion:(NSFileVersion *)arg1 ;
-(NSString *)name;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)presentedItemDidChange;
-(void)updateMetadata;
-(void)setName:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)metadata;
-(void)dealloc;
-(BOOL)isConflictVersion;
-(void)saveData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllVersionsIncludingCurrent:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasConflict;
-(void)setIsConflictVersion:(BOOL)arg1 ;
-(void)setHasConflict:(BOOL)arg1 ;
-(void)updateConflictStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteConflictVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

