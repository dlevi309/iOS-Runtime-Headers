/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentSize:(unsigned long long)arg1 ;
-(void)setItemID:(BRCItemID *)arg1 ;
-(unsigned long long)mtime;
-(BOOL)isPackage;
-(unsigned long long)fileID;
-(unsigned long long)contentSize;
-(unsigned)genID;
-(BRCItemID *)itemID;
-(void)setFileID:(unsigned long long)arg1 ;
-(id)additionalPayload;
-(void)setIsPackage:(BOOL)arg1 ;
-(void)setGenID:(unsigned)arg1 ;
-(id)subDescription;
-(void)setMtime:(unsigned long long)arg1 ;
-(unsigned long long)syncUpBatchSize;
-(void)setSyncUpBatchSize:(unsigned long long)arg1 ;
@end

