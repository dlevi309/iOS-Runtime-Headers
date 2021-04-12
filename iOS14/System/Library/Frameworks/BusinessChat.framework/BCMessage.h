/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


@protocol BCDictionaryImageSerializable;
@class NSString, BCImageStore, BCMessageData, BCMessageInfo, NSAttributedString, NSData, NSURL, NSDictionary, UIImage;

@interface BCMessage : NSObject {

	BOOL _isFromMe;
	NSString* _version;
	NSString* _requestIdentifier;
	NSString* _messageGUID;
	id<BCDictionaryImageSerializable> _rootObject;
	BCImageStore* _imageStore;
	BCMessageData* _messageData;
	BCMessageInfo* _receivedMessage;
	BCMessageInfo* _replyMessage;
	NSString* _title;
	NSAttributedString* _subtitle;
	NSString* _summaryText;
	NSString* _subcaption;
	NSString* _accessibilityLabel;
	NSString* _internalRootKey;

}

@property (assign,nonatomic) BOOL isFromMe;                                             //@synthesize isFromMe=_isFromMe - In the implementation block
@property (nonatomic,retain) BCImageStore * imageStore;                                 //@synthesize imageStore=_imageStore - In the implementation block
@property (nonatomic,retain) BCMessageData * messageData;                               //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,retain) BCMessageInfo * receivedMessage;                           //@synthesize receivedMessage=_receivedMessage - In the implementation block
@property (nonatomic,retain) BCMessageInfo * replyMessage;                              //@synthesize replyMessage=_replyMessage - In the implementation block
@property (nonatomic,retain) id<BCDictionaryImageSerializable> rootObject;              //@synthesize rootObject=_rootObject - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                    //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;                              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSString * version;                                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * internalRootKey;                                //@synthesize internalRootKey=_internalRootKey - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) Class rootModelObject; 
@property (nonatomic,readonly) NSString * rootKey; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * summaryText;                                    //@synthesize summaryText=_summaryText - In the implementation block
@property (nonatomic,retain) NSString * subcaption;                                     //@synthesize subcaption=_subcaption - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabel;                             //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(id)defaultBubbleTitleFor:(id)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)accessibilityLabel;
-(NSString *)requestIdentifier;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSString *)messageGUID;
-(id<BCDictionaryImageSerializable>)rootObject;
-(NSAttributedString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(UIImage *)image;
-(void)setRootObject:(id<BCDictionaryImageSerializable>)arg1 ;
-(void)setSubcaption:(NSString *)arg1 ;
-(void)setSummaryText:(NSString *)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(NSString *)summaryText;
-(BCImageStore *)imageStore;
-(NSData *)data;
-(BOOL)isFromMe;
-(long long)type;
-(NSDictionary *)dictionaryValue;
-(void)setMessageData:(BCMessageData *)arg1 ;
-(void)setSubtitle:(NSAttributedString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)rootKey;
-(void)setImageStore:(BCImageStore *)arg1 ;
-(NSString *)version;
-(long long)style;
-(NSString *)title;
-(BCMessageData *)messageData;
-(BCMessageInfo *)replyMessage;
-(BCMessageInfo *)receivedMessage;
-(id)initFromOriginalMessage:(id)arg1 rootKey:(id)arg2 rootObject:(id)arg3 receivedMessage:(id)arg4 replyMessage:(id)arg5 ;
-(id)initWithData:(id)arg1 url:(id)arg2 isFromMe:(BOOL)arg3 ;
-(void)updateTitles;
-(Class)rootModelObject;
-(void)setReplyMessage:(BCMessageInfo *)arg1 ;
-(void)setReceivedMessage:(BCMessageInfo *)arg1 ;
-(void)setInternalRootKey:(NSString *)arg1 ;
-(id)encodedStringForDictionary:(id)arg1 ;
-(NSString *)internalRootKey;
-(BOOL)isVersionSupported;
-(BOOL)isAnyUnknownRootKey;
-(id)initWithData:(id)arg1 url:(id)arg2 messageGUID:(id)arg3 isFromMe:(BOOL)arg4 ;
-(NSString *)subcaption;
@end

