/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


@protocol MFDataConsumer;
@class MFIMAPFetchResult, NSString;

@interface _MFIMAPFetchUnit : NSObject {

	MFIMAPFetchResult* _expectedFetchResult;
	unsigned _uid;
	id<MFDataConsumer> _bodyDataConsumer;
	NSString* _consumerSection;
	NSString* _fetchItem;

}

@property (nonatomic,retain) id<MFDataConsumer> bodyDataConsumer;              //@synthesize bodyDataConsumer=_bodyDataConsumer - In the implementation block
@property (nonatomic,retain) NSString * consumerSection;                       //@synthesize consumerSection=_consumerSection - In the implementation block
@property (nonatomic,copy) NSString * fetchItem;                               //@synthesize fetchItem=_fetchItem - In the implementation block
@property (assign,nonatomic) unsigned uid;                                     //@synthesize uid=_uid - In the implementation block
-(void)setUid:(unsigned)arg1 ;
-(unsigned)uid;
-(NSString *)fetchItem;
-(void)setFetchItem:(NSString *)arg1 ;
-(void)setBodyDataConsumer:(id<MFDataConsumer>)arg1 ;
-(void)setConsumerSection:(NSString *)arg1 ;
-(BOOL)matchesFetchResponse:(id)arg1 ;
-(id<MFDataConsumer>)bodyDataConsumer;
-(NSString *)consumerSection;
-(id)copyFailedFetchResponse;
-(void)_setupExpectedFetchResult;
@end

