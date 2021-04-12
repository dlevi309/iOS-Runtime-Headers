/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding> {

	BOOL _allowDeepLink;
	BOOL _hasAssociatedPaymentApplication;
	BOOL _archived;
	NSString* _identifier;
	NSString* _serviceIdentifier;
	NSString* _content;
	NSDate* _messageDate;
	NSDate* _expirationDate;
	unsigned long long _messageType;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                        //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSDate * messageDate;                                //@synthesize messageDate=_messageDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long messageType;                    //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL allowDeepLink;                                //@synthesize allowDeepLink=_allowDeepLink - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPaymentApplication;              //@synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication - In the implementation block
@property (nonatomic,readonly) BOOL archiveOnNextTransaction; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,getter=isArchived,nonatomic) BOOL archived;                   //@synthesize archived=_archived - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentMessageWithDictionary:(id)arg1 ;
-(unsigned long long)messageType;
-(void)setMessageType:(unsigned long long)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)content;
-(id)init;
-(void)setContent:(NSString *)arg1 ;
-(void)setArchived:(BOOL)arg1 ;
-(BOOL)allowDeepLink;
-(void)setAllowDeepLink:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentMessage:(id)arg1 ;
-(BOOL)archiveOnNextTransaction;
-(BOOL)hasAssociatedPaymentApplication;
-(void)setHasAssociatedPaymentApplication:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(BOOL)isArchived;
-(id)description;
-(BOOL)isValid;
-(NSDate *)messageDate;
-(NSDate *)expirationDate;
-(void)setMessageDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

