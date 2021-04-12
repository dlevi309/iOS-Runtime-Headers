/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class WLSourceDeviceAccount, NSString, NSDate, NSDictionary;

@interface WLSourceDeviceRecordSummary : NSObject {

	BOOL _storeDataAsFile;
	BOOL _didDownload;
	WLSourceDeviceAccount* _account;
	unsigned long long _sqlID;
	NSString* _identifier;
	unsigned long long _itemSize;
	NSString* _relativePath;
	NSDate* _modifiedDate;
	NSDictionary* _metadata;
	NSString* _dataFilePath;
	unsigned long long _downloadSegmentCount;

}

@property (nonatomic,retain) WLSourceDeviceAccount * account;                      //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) unsigned long long sqlID;                             //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long itemSize;                          //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,copy) NSString * relativePath;                                //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,copy) NSDate * modifiedDate;                                  //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL storeDataAsFile;                                 //@synthesize storeDataAsFile=_storeDataAsFile - In the implementation block
@property (nonatomic,copy) NSString * dataFilePath;                                //@synthesize dataFilePath=_dataFilePath - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSegmentCount;              //@synthesize downloadSegmentCount=_downloadSegmentCount - In the implementation block
@property (assign,nonatomic) BOOL didDownload;                                     //@synthesize didDownload=_didDownload - In the implementation block
+(id)_numberFormatter;
+(id)summaryWithInfo:(id)arg1 account:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)relativePath;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(WLSourceDeviceAccount *)account;
-(void)setAccount:(WLSourceDeviceAccount *)arg1 ;
-(unsigned long long)itemSize;
-(void)setItemSize:(unsigned long long)arg1 ;
-(void)setRelativePath:(NSString *)arg1 ;
-(NSDate *)modifiedDate;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(unsigned long long)sqlID;
-(void)setSqlID:(unsigned long long)arg1 ;
-(NSString *)dataFilePath;
-(unsigned long long)downloadSegmentCount;
-(BOOL)storeDataAsFile;
-(void)setStoreDataAsFile:(BOOL)arg1 ;
-(void)setDataFilePath:(NSString *)arg1 ;
-(void)setDownloadSegmentCount:(unsigned long long)arg1 ;
-(id)initWithInfo:(id)arg1 account:(id)arg2 ;
-(BOOL)didDownload;
-(void)setDidDownload:(BOOL)arg1 ;
@end

