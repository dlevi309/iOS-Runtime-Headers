/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, TPSDocument;

@interface TPSNotificationCache : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSString* _collectionIdentifier;
	NSDictionary* _extensionPayload;
	NSURL* _attachmentURL;
	TPSDocument* _document;
	NSString* _locale;

}

@property (nonatomic,retain) NSString * locale;                            //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,retain) TPSDocument * document;                       //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionPayload;              //@synthesize extensionPayload=_extensionPayload - In the implementation block
@property (nonatomic,retain) NSURL * attachmentURL;                        //@synthesize attachmentURL=_attachmentURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notificationCacheWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3 ;
+(id)classSet;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)collectionIdentifier;
-(NSString *)locale;
-(void)setLocale:(NSString *)arg1 ;
-(void)setDocument:(TPSDocument *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setType:(unsigned long long)arg1 ;
-(BOOL)hasLocaleChanged;
-(NSURL *)attachmentURL;
-(void)setAttachmentURL:(NSURL *)arg1 ;
-(unsigned long long)type;
-(void)setExtensionPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)extensionPayload;
-(id)initWithCoder:(id)arg1 ;
-(TPSDocument *)document;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3 ;
@end

