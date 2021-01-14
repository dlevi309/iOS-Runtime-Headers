/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)recipients;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)addText:(id)arg1 ;
-(id)addPart:(id)arg1 ;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSDictionary *)rawHeaders;
-(int)messageType;
-(void)setRecipient:(id)arg1 ;
-(NSString *)subject;
-(NSObject*<CTMessageAddress>*<NSCopying>)sender;
-(void)addRecipient:(id)arg1 ;
-(void)setMessageId:(unsigned)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(NSString *)countryCode;
-(id)initWithDate:(id)arg1 ;
-(void)setRawHeaders:(NSDictionary *)arg1 ;
-(unsigned)replaceMessage;
-(void)setBypassSupportedMessageModesCheck:(BOOL)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(void)removeRecipient:(id)arg1 ;
-(void)setSender:(NSObject*<CTMessageAddress>*<NSCopying>)arg1 ;
-(BOOL)bypassSupportedMessageModesCheck;
-(void)removeRecipientsInArray:(id)arg1 ;
-(id)allContentTypeParameterNames;
-(id)addData:(id)arg1 withContentType:(id)arg2 ;
-(void)addPhoneRecipient:(id)arg1 ;
-(void)addEmailRecipient:(id)arg1 ;
-(id)init;
-(void)setReplaceMessage:(unsigned)arg1 ;
-(void)removePartAtIndex:(unsigned long long)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(NSString *)contentType;
-(NSUUID *)uniqueIdentifier;
-(CTXPCServiceSubscriptionContext *)context;
-(NSArray *)items;
-(id)description;
-(void)setContentType:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setServiceCenter:(CTPhoneNumber *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(unsigned)messageId;
-(CTPhoneNumber *)serviceCenter;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end

