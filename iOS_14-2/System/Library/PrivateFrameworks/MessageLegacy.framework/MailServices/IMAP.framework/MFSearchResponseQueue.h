/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/MFBaseSyncResponseQueue.h>

@class NSMutableIndexSet, NSIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {

	NSMutableIndexSet* indexSet;
	unsigned limit;

}

@property (nonatomic,retain,readonly) NSIndexSet * indexSet; 
-(BOOL)addItem:(id)arg1 ;
-(BOOL)flush;
-(id)init;
-(NSIndexSet *)indexSet;
-(void)dealloc;
-(unsigned long long)uidForItem:(id)arg1 ;
-(unsigned long long)flagsForItem:(id)arg1 ;
@end

