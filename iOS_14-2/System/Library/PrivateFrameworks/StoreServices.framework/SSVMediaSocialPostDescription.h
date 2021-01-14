/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSArray, NSString;

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding> {

	NSNumber* _accountIdentifier;
	NSArray* _attachments;
	BOOL _attributed;
	NSString* _authorIdentifier;
	NSString* _authorType;
	NSArray* _contentItems;
	NSArray* _externalServiceDestinations;
	NSString* _sourceApplicationIdentifier;
	NSString* _text;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                               //@synthesize attachments=_attachments - In the implementation block
@property (assign,getter=isAttributed,nonatomic) BOOL attributed;               //@synthesize attributed=_attributed - In the implementation block
@property (nonatomic,copy) NSString * authorIdentifier;                         //@synthesize authorIdentifier=_authorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * authorType;                               //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSArray * contentItems;                              //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,copy) NSArray * externalServiceDestinations;               //@synthesize externalServiceDestinations=_externalServiceDestinations - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationIdentifier;              //@synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * text;                                     //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)contentItems;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)attachments;
-(void)setAttributed:(BOOL)arg1 ;
-(void)setAuthorIdentifier:(NSString *)arg1 ;
-(void)setAuthorType:(NSString *)arg1 ;
-(void)setExternalServiceDestinations:(NSArray *)arg1 ;
-(NSString *)authorIdentifier;
-(void)setSourceApplicationIdentifier:(NSString *)arg1 ;
-(NSArray *)externalServiceDestinations;
-(NSString *)sourceApplicationIdentifier;
-(NSNumber *)accountIdentifier;
-(void)setText:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSString *)text;
-(BOOL)isAttributed;
-(void)setContentItems:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)authorType;
@end

