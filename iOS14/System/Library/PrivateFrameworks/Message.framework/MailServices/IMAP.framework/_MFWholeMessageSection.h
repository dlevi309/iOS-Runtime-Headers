/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <libobjc.A.dylib/MFMessageDataSection.h>

@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection> {

	MFDataHolder* _dataHolder;

}

@property (nonatomic,retain) MFDataHolder * dataHolder;              //@synthesize dataHolder=_dataHolder - In the implementation block
-(BOOL)isComplete;
-(MFDataHolder *)dataHolder;
-(void)setDataHolder:(MFDataHolder *)arg1 ;
-(id)partName;
-(BOOL)isPartial;
@end

