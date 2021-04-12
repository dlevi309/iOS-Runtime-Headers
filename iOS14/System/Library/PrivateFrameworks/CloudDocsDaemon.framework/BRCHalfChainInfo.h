/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

