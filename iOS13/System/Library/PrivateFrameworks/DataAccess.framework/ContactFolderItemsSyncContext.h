/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class CNChangeHistoryAnchor;

@interface ContactFolderItemsSyncContext : NSObject {

	int _abPersonChangeId;
	int _abGroupChangeId;
	CNChangeHistoryAnchor* _cnChangeAnchor;

}

@property (assign,nonatomic) int abPersonChangeId;                                //@synthesize abPersonChangeId=_abPersonChangeId - In the implementation block
@property (assign,nonatomic) int abGroupChangeId;                                 //@synthesize abGroupChangeId=_abGroupChangeId - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * cnChangeAnchor;              //@synthesize cnChangeAnchor=_cnChangeAnchor - In the implementation block
-(int)abPersonChangeId;
-(void)setAbPersonChangeId:(int)arg1 ;
-(int)abGroupChangeId;
-(void)setAbGroupChangeId:(int)arg1 ;
-(CNChangeHistoryAnchor *)cnChangeAnchor;
-(void)setCnChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
@end

