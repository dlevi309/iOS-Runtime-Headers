/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MSSession, NSUUID, MSMessageLayout, NSURL, NSString, NSError, NSDate, NSData;

@interface MSMessage : NSObject <NSCopying, NSSecureCoding> {

	BOOL _pending;
	BOOL _shouldExpire;
	BOOL _isFromMe;
	BOOL _requiresValidation;
	MSSession* _session;
	NSUUID* _senderParticipantIdentifier;
	MSMessageLayout* _layout;
	NSURL* _URL;
	NSString* _accessibilityLabel;
	NSString* _summaryText;
	NSError* _error;
	NSDate* _time;
	NSData* __data;
	NSString* _statusText;
	NSString* _breadcrumbText;

}

@property (nonatomic,retain) NSDate * time;                                     //@synthesize time=_time - In the implementation block
@property (assign,getter=isPending,nonatomic) BOOL pending;                     //@synthesize pending=_pending - In the implementation block
@property (nonatomic,copy) NSData * _data;                                      //@synthesize _data=__data - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                     //@synthesize isFromMe=_isFromMe - In the implementation block
@property (nonatomic,retain) NSUUID * senderParticipantIdentifier;              //@synthesize senderParticipantIdentifier=_senderParticipantIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requiresValidation;                           //@synthesize requiresValidation=_requiresValidation - In the implementation block
@property (nonatomic,copy) NSString * statusText;                               //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy) NSString * breadcrumbText;                           //@synthesize breadcrumbText=_breadcrumbText - In the implementation block
@property (nonatomic,readonly) MSSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) MSMessageLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) BOOL shouldExpire;                                 //@synthesize shouldExpire=_shouldExpire - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                       //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * summaryText;                              //@synthesize summaryText=_summaryText - In the implementation block
@property (nonatomic,copy) NSError * error;                                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)shareableCredentialMessage;
-(id)peerPaymentMessage;
-(id)subcredentialInvitationMessage;
-(NSString *)accessibilityLabel;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(NSString *)statusText;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isPending;
-(void)setPending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MSSession *)session;
-(void)setError:(NSError *)arg1 ;
-(NSData *)_data;
-(NSError *)error;
-(BOOL)requiresValidation;
-(void)setSummaryText:(NSString *)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(id)_sanitizedCopy;
-(void)setBreadcrumbText:(NSString *)arg1 ;
-(void)setShouldExpire:(BOOL)arg1 ;
-(void)setRequiresValidation:(BOOL)arg1 ;
-(NSString *)summaryText;
-(NSString *)breadcrumbText;
-(BOOL)isFromMe;
-(NSURL *)URL;
-(BOOL)shouldExpire;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLayout:(MSMessageLayout *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)senderParticipantIdentifier;
-(void)setStatusText:(NSString *)arg1 ;
-(MSMessageLayout *)layout;
-(void)setSenderParticipantIdentifier:(NSUUID *)arg1 ;
-(void)set_data:(NSData *)arg1 ;
-(id)_shallowCopy;
-(void)_sanitize;
-(void)_mergeSanitizedDataFromMessage:(id)arg1 ;
@end

