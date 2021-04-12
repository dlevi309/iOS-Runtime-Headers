/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(unsigned long long)messageType;
-(void)setMessageType:(unsigned long long)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSDate *)messageDate;
-(void)setMessageDate:(NSDate *)arg1 ;
-(void)setHasAssociatedPaymentApplication:(BOOL)arg1 ;
-(void)setAllowDeepLink:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentMessage:(id)arg1 ;
-(BOOL)archiveOnNextTransaction;
-(BOOL)allowDeepLink;
-(BOOL)hasAssociatedPaymentApplication;
-(BOOL)isArchived;
-(void)setArchived:(BOOL)arg1 ;
@end

