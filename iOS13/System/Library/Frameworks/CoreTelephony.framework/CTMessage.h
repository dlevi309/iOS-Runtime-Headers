/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


@protocol CTMessageAddressNSCopying;
@class NSObject, NSMutableArray, NSDictionary, NSDate, CTPhoneNumber, NSString, NSMutableDictionary, NSUUID, CTXPCServiceSubscriptionContext, NSArray;

@interface CTMessage : NSObject {

	NSObject*<CTMessageAddress>*<NSCopying> _sender;
	NSMutableArray* _recipients;
	NSMutableArray* _items;
	NSDictionary* _rawHeaders;
	NSDate* _date;
	unsigned _messageId;
	int _messageType;
	CTPhoneNumber* _serviceCenter;
	NSString* _subject;
	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	unsigned _replaceMessage;
	NSString* _countryCode;
	NSUUID* _uuid;
	BOOL _bypassSupportedMessageModesCheck;
	CTXPCServiceSubscriptionContext* _context;

}

@property (readonly) NSArray * recipients;                                              //@synthesize recipients=_recipients - In the implementation block
@property (readonly) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (readonly) NSArray * items;                                                   //@synthesize items=_items - In the implementation block
@property (readonly) NSDictionary * rawHeaders;                                         //@synthesize rawHeaders=_rawHeaders - In the implementation block
@property (readonly) unsigned replaceMessage;                                           //@synthesize replaceMessage=_replaceMessage - In the implementation block
@property (assign,nonatomic) unsigned messageId;                                        //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) int messageType;                                           //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) CTPhoneNumber * serviceCenter;                               //@synthesize serviceCenter=_serviceCenter - In the implementation block
@property (nonatomic,copy) NSString * subject;                                          //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSObject*<CTMessageAddress>*<NSCopying> sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                      //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                             //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL bypassSupportedMessageModesCheck;                     //@synthesize bypassSupportedMessageModesCheck=_bypassSupportedMessageModesCheck - In the implementation block
@property (nonatomic,copy) CTXPCServiceSubscriptionContext * context;                   //@synthesize context=_context - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(NSString *)countryCode;
-(CTXPCServiceSubscriptionContext *)context;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(NSObject*<CTMessageAddress>*<NSCopying>)sender;
-(NSArray *)recipients;
-(void)setSender:(NSObject*<CTMessageAddress>*<NSCopying>)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)addPhoneRecipient:(id)arg1 ;
-(void)addEmailRecipient:(id)arg1 ;
-(void)setRawHeaders:(NSDictionary *)arg1 ;
-(void)setReplaceMessage:(unsigned)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)removeRecipientsInArray:(id)arg1 ;
-(void)setRecipient:(id)arg1 ;
-(id)addText:(id)arg1 ;
-(id)addData:(id)arg1 withContentType:(id)arg2 ;
-(id)addPart:(id)arg1 ;
-(void)removePartAtIndex:(unsigned long long)arg1 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(unsigned)messageId;
-(void)setMessageId:(unsigned)arg1 ;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(CTPhoneNumber *)serviceCenter;
-(void)setServiceCenter:(CTPhoneNumber *)arg1 ;
-(NSDictionary *)rawHeaders;
-(unsigned)replaceMessage;
-(BOOL)bypassSupportedMessageModesCheck;
-(void)setBypassSupportedMessageModesCheck:(BOOL)arg1 ;
@end
