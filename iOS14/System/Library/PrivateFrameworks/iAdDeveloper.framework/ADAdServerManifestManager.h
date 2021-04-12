/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
*/


@class NSMutableDictionary, NSString;

@interface ADAdServerManifestManager : NSObject {

	NSMutableDictionary* _recordsByServerName;
	NSString* _deviceDescription;

}

@property (nonatomic,retain) NSMutableDictionary * recordsByServerName;              //@synthesize recordsByServerName=_recordsByServerName - In the implementation block
@property (nonatomic,copy) NSString * deviceDescription;                             //@synthesize deviceDescription=_deviceDescription - In the implementation block
@property (nonatomic,readonly) BOOL updateInProgress; 
+(id)sharedManager;
-(id)init;
-(NSString *)deviceDescription;
-(BOOL)updateInProgress;
-(id)serverRecords;
-(void)dealloc;
-(void)setDeviceDescription:(NSString *)arg1 ;
-(void)setURL:(id)arg1 forTemporaryServerWithName:(id)arg2 ;
-(void)_setURL:(id)arg1 forServerWithName:(id)arg2 temporary:(BOOL)arg3 ;
-(NSMutableDictionary *)recordsByServerName;
-(void)_considerRefreshingServerRecord:(id)arg1 ;
-(void)_persistRecords;
-(id)_persistedManifestsURL;
-(void)_storeLoadedRecords:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)URLForServerWithName:(id)arg1 ;
-(void)setManifest:(id)arg1 forRecord:(id)arg2 URL:(id)arg3 ;
-(void)refreshAllRecords;
-(void)refreshRecord:(id)arg1 ;
-(void)_loadRecords:(/*^block*/id)arg1 ;
-(void)setRecordsByServerName:(NSMutableDictionary *)arg1 ;
@end

