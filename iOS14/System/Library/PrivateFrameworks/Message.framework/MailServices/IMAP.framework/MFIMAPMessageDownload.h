/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/MFIMAPCompoundDownload.h>

@protocol MFCollectingDataConsumer;
@class MFMessage, MFMimePart;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {

	MFMessage* _message;
	MFMimePart* _topLevelPart;
	unsigned _allowsPartialDownloads : 1;
	unsigned _usingPartialDownloads : 1;
	unsigned _startedFetch : 1;
	unsigned _fetchingMessageContents : 1;
	unsigned _fetchingBodyText : 1;
	unsigned _doneAddingSubdownloads : 1;
	unsigned _fetchBodyData : 1;
	id<MFCollectingDataConsumer> _headerConsumer;
	id<MFCollectingDataConsumer> _textConsumer;
	BOOL _receivedHeaders;
	BOOL _receivedText;

}
-(BOOL)isComplete;
-(BOOL)partial;
-(id)message;
-(id)initWithMessage:(id)arg1 ;
-(id)data;
-(id)topLevelPart;
-(void)setTopLevelPart:(id)arg1 ;
-(BOOL)allowsPartialDownloads;
-(void)setAllowsPartialDownloads:(BOOL)arg1 ;
-(BOOL)isSuccessful;
-(void)setFetchBodyData:(BOOL)arg1 ;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(id)_networkConverterWithConsumer:(id)arg1 didReceiveData:(/*^block*/id)arg2 ;
-(BOOL)fetchBodyData;
@end

