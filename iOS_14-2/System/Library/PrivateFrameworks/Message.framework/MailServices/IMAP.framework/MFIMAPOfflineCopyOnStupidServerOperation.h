/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFIMAPOperation.h>

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation {

	CFArrayRef messageIds;
	CFArrayRef internalDates;

}
-(unsigned char)_magic;
-(void)dealloc;
-(unsigned)approximateSize;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(void)serializeIntoData:(id)arg1 ;
-(id)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(BOOL)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned)arg3 ;
-(void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned)arg3 ;
@end

