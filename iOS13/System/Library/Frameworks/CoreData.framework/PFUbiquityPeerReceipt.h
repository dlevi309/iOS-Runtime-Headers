/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class PFUbiquityKnowledgeVector, NSDate, PFUbiquityLocation;

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {

	PFUbiquityKnowledgeVector* _kv;
	NSDate* _writeDate;

}

@property (nonatomic,readonly) PFUbiquityLocation * receiptFileLocation; 
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * kv;                        //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) NSDate * writeDate;                                      //@synthesize writeDate=_writeDate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6 ;
-(PFUbiquityKnowledgeVector *)kv;
-(id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2 ;
-(NSDate *)writeDate;
-(BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5 ;
-(PFUbiquityLocation *)receiptFileLocation;
-(void)setWriteDate:(NSDate *)arg1 ;
@end

