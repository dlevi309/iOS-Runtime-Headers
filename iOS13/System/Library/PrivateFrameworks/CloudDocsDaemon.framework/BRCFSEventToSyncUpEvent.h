/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCEventMetric.h>

@class BRCItemID;

@interface BRCFSEventToSyncUpEvent : BRCEventMetric {

	BOOL _isPackage;
	unsigned _genID;
	unsigned long long _fileID;
	BRCItemID* _itemID;
	unsigned long long _mtime;
	unsigned long long _contentSize;
	unsigned long long _syncUpBatchSize;

}

@property (assign,nonatomic) unsigned long long fileID;                       //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) unsigned genID;                                  //@synthesize genID=_genID - In the implementation block
@property (nonatomic,retain) BRCItemID * itemID;                              //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long mtime;                        //@synthesize mtime=_mtime - In the implementation block
@property (assign,nonatomic) BOOL isPackage;                                  //@synthesize isPackage=_isPackage - In the implementation block
@property (assign,nonatomic) unsigned long long syncUpBatchSize;              //@synthesize syncUpBatchSize=_syncUpBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long contentSize;                  //@synthesize contentSize=_contentSize - In the implementation block
-(BOOL)isPackage;
-(BRCItemID *)itemID;
-(unsigned long long)contentSize;
-(void)setItemID:(BRCItemID *)arg1 ;
-(void)setContentSize:(unsigned long long)arg1 ;
-(unsigned long long)mtime;
-(unsigned long long)fileID;
-(void)setFileID:(unsigned long long)arg1 ;
-(id)additionalPayload;
-(void)setIsPackage:(BOOL)arg1 ;
-(unsigned)genID;
-(void)setGenID:(unsigned)arg1 ;
-(id)subDescription;
-(void)setMtime:(unsigned long long)arg1 ;
-(unsigned long long)syncUpBatchSize;
-(void)setSyncUpBatchSize:(unsigned long long)arg1 ;
@end

