/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


@class NSURL, NSData, NSDictionary, NSArray;

@interface BCMessageData : NSObject {

	NSURL* _url;
	NSData* _data;
	NSDictionary* _jsonDictionary;
	NSDictionary* _replyMessageDictionary;
	NSDictionary* _receivedMessageDictionary;

}

@property (nonatomic,retain) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDictionary * jsonDictionary;                         //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * replyMessageDictionary;                 //@synthesize replyMessageDictionary=_replyMessageDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * receivedMessageDictionary;              //@synthesize receivedMessageDictionary=_receivedMessageDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * combinedDictionary; 
@property (nonatomic,readonly) NSArray * imagesArray; 
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSDictionary *)jsonDictionary;
-(void)setJsonDictionary:(NSDictionary *)arg1 ;
-(void)decodeData:(id)arg1 dictionaryKey:(id)arg2 ;
-(NSDictionary *)replyMessageDictionary;
-(NSDictionary *)receivedMessageDictionary;
-(void)setReplyMessageDictionary:(NSDictionary *)arg1 ;
-(void)setReceivedMessageDictionary:(NSDictionary *)arg1 ;
-(id)initWithUrl:(id)arg1 data:(id)arg2 ;
-(NSDictionary *)combinedDictionary;
-(NSArray *)imagesArray;
@end

