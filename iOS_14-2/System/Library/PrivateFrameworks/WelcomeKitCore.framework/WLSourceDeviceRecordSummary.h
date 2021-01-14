/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WLSourceDeviceAccount *)account;
-(unsigned long long)itemSize;
-(void)setAccount:(WLSourceDeviceAccount *)arg1 ;
-(unsigned long long)sqlID;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)relativePath;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRelativePath:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(NSDictionary *)metadata;
-(NSDate *)modifiedDate;
-(void)setItemSize:(unsigned long long)arg1 ;
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

