/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class CKRecord, BRFieldCKInfo;

@interface BRCHalfChainInfo : NSObject {

	CKRecord* _record;
	BRFieldCKInfo* _ckInfo;

}

@property (nonatomic,retain) CKRecord * record;                     //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(BRFieldCKInfo *)ckInfo;
-(id)initWithRecord:(id)arg1 ckInfo:(id)arg2 ;
@end

