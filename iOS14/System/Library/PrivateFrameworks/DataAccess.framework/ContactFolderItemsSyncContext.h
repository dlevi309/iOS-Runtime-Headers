/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class CNChangeHistoryAnchor;

@interface ContactFolderItemsSyncContext : NSObject {

	BOOL _changeHistoryTruncated;
	int _abPersonChangeId;
	int _abGroupChangeId;
	unsigned long long _latestSequenceNumber;
	CNChangeHistoryAnchor* _cnChangeAnchor;

}

@property (assign,nonatomic) int abPersonChangeId;                                                     //@synthesize abPersonChangeId=_abPersonChangeId - In the implementation block
@property (assign,nonatomic) int abGroupChangeId;                                                      //@synthesize abGroupChangeId=_abGroupChangeId - In the implementation block
@property (assign,getter=isChangeHistoryTruncated,nonatomic) BOOL changeHistoryTruncated;              //@synthesize changeHistoryTruncated=_changeHistoryTruncated - In the implementation block
@property (assign,nonatomic) unsigned long long latestSequenceNumber;                                  //@synthesize latestSequenceNumber=_latestSequenceNumber - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * cnChangeAnchor;                                   //@synthesize cnChangeAnchor=_cnChangeAnchor - In the implementation block
-(id)init;
-(void)setAbPersonChangeId:(int)arg1 ;
-(int)abPersonChangeId;
-(int)abGroupChangeId;
-(void)setAbGroupChangeId:(int)arg1 ;
-(BOOL)isChangeHistoryTruncated;
-(void)setChangeHistoryTruncated:(BOOL)arg1 ;
-(unsigned long long)latestSequenceNumber;
-(void)setLatestSequenceNumber:(unsigned long long)arg1 ;
-(CNChangeHistoryAnchor *)cnChangeAnchor;
-(void)setCnChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
@end

