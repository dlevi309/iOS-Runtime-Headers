/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCEventMetric.h>

@class NSUUID, NSMutableSet;

@interface BRCUserDownloadEvent : BRCEventMetric {

	BOOL _didSucceed;
	BOOL _isDownloadingForBackup;
	BOOL _isRecursiveDownload;
	NSUUID* _operationID;
	NSMutableSet* _docIDs;
	unsigned long long _itemCount;
	unsigned long long _totalContentSize;

}

@property (nonatomic,retain) NSUUID * operationID;                             //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSMutableSet * docIDs;                            //@synthesize docIDs=_docIDs - In the implementation block
@property (assign,nonatomic) BOOL didSucceed;                                  //@synthesize didSucceed=_didSucceed - In the implementation block
@property (assign,nonatomic) BOOL isDownloadingForBackup;                      //@synthesize isDownloadingForBackup=_isDownloadingForBackup - In the implementation block
@property (assign,nonatomic) BOOL isRecursiveDownload;                         //@synthesize isRecursiveDownload=_isRecursiveDownload - In the implementation block
@property (assign,nonatomic) unsigned long long itemCount;                     //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalContentSize;              //@synthesize totalContentSize=_totalContentSize - In the implementation block
-(id)init;
-(unsigned long long)itemCount;
-(void)setItemCount:(unsigned long long)arg1 ;
-(NSUUID *)operationID;
-(void)setOperationID:(NSUUID *)arg1 ;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(unsigned long long)totalContentSize;
-(id)additionalPayload;
-(void)setIsRecursiveDownload:(BOOL)arg1 ;
-(void)setIsDownloadingForBackup:(BOOL)arg1 ;
-(NSMutableSet *)docIDs;
-(id)subDescription;
-(void)setDocIDs:(NSMutableSet *)arg1 ;
-(BOOL)isDownloadingForBackup;
-(BOOL)isRecursiveDownload;
-(void)setTotalContentSize:(unsigned long long)arg1 ;
@end

