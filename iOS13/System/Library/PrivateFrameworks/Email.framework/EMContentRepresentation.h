/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/_EMDistantContentRepresentation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@protocol EMContentItem, _EMDistantContentRepresentation;
@class EFInvocationToken, NSURL, NSArray, EMMessage, EMSecurityInformation, CSSearchableItem, EMListUnsubscribeCommand, EMMessageHeaders, EFSandboxedURLWrapper, NSString;

@interface EMContentRepresentation : NSObject <_EMDistantContentRepresentation, NSSecureCoding, EFLoggable, EFPubliclyDescribable> {

	EFInvocationToken* _invocable;
	BOOL _claimedScopedResource;
	BOOL _hasMoreContent;
	id<EMContentItem> _contentItem;
	NSURL* _publicMessageURL;
	NSArray* _replyToList;
	EMMessage* _contentMessage;
	NSArray* _relatedContentItems;
	EMSecurityInformation* _securityInformation;
	CSSearchableItem* _searchableItem;
	EMListUnsubscribeCommand* _unsubscribeCommand;
	long long _remainingByteCount;
	long long _transportType;
	EMMessageHeaders* _requestedHeaders;
	EFSandboxedURLWrapper* _urlWrapper;
	id<_EMDistantContentRepresentation> _distantContentRepresentation;
	/*^block*/id _requestMoreContentBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EFSandboxedURLWrapper * urlWrapper;                                            //@synthesize urlWrapper=_urlWrapper - In the implementation block
@property (assign,nonatomic,__weak) id<EMContentItem> contentItem;                                          //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,retain) id<_EMDistantContentRepresentation> distantContentRepresentation;              //@synthesize distantContentRepresentation=_distantContentRepresentation - In the implementation block
@property (nonatomic,retain) NSURL * publicMessageURL;                                                      //@synthesize publicMessageURL=_publicMessageURL - In the implementation block
@property (nonatomic,copy) NSArray * replyToList;                                                           //@synthesize replyToList=_replyToList - In the implementation block
@property (nonatomic,retain) EMMessage * contentMessage;                                                    //@synthesize contentMessage=_contentMessage - In the implementation block
@property (nonatomic,copy) NSArray * relatedContentItems;                                                   //@synthesize relatedContentItems=_relatedContentItems - In the implementation block
@property (nonatomic,retain) EMSecurityInformation * securityInformation;                                   //@synthesize securityInformation=_securityInformation - In the implementation block
@property (nonatomic,retain) CSSearchableItem * searchableItem;                                             //@synthesize searchableItem=_searchableItem - In the implementation block
@property (nonatomic,retain) EMListUnsubscribeCommand * unsubscribeCommand;                                 //@synthesize unsubscribeCommand=_unsubscribeCommand - In the implementation block
@property (assign,nonatomic) BOOL hasMoreContent;                                                           //@synthesize hasMoreContent=_hasMoreContent - In the implementation block
@property (assign,nonatomic) long long remainingByteCount;                                                  //@synthesize remainingByteCount=_remainingByteCount - In the implementation block
@property (assign,nonatomic) long long transportType;                                                       //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) EMMessageHeaders * requestedHeaders;                                           //@synthesize requestedHeaders=_requestedHeaders - In the implementation block
@property (nonatomic,copy) id requestMoreContentBlock;                                                      //@synthesize requestMoreContentBlock=_requestMoreContentBlock - In the implementation block
@property (nonatomic,readonly) NSURL * contentURL; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)temporaryURLWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 pathExtension:(id)arg4 cleanupInvocable:(id*)arg5 error:(id*)arg6 ;
+(id)contentRequestDelegateInterface;
+(id)distantContentRepresentationInterface;
-(id)requestRepresentationForItemWithObjectID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)requestUpdatedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EFSandboxedURLWrapper *)urlWrapper;
-(void)setUrlWrapper:(EFSandboxedURLWrapper *)arg1 ;
-(long long)transportType;
-(NSURL *)contentURL;
-(void)setTransportType:(long long)arg1 ;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
-(CSSearchableItem *)searchableItem;
-(id<EMContentItem>)contentItem;
-(NSString *)ef_publicDescription;
-(NSArray *)relatedContentItems;
-(void)setRelatedContentItems:(NSArray *)arg1 ;
-(NSURL *)publicMessageURL;
-(void)setPublicMessageURL:(NSURL *)arg1 ;
-(id)initWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 extension:(id)arg4 relatedItems:(id)arg5 securityInformation:(id)arg6 ;
-(void)setReplyToList:(NSArray *)arg1 ;
-(id)initWithContentURL:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3 ;
-(void)addInvalidationHandler:(/*^block*/id)arg1 ;
-(void)setHasMoreContent:(BOOL)arg1 ;
-(void)setRemainingByteCount:(long long)arg1 ;
-(void)mergeUpdatedRepresentation:(id)arg1 ;
-(id)requestMoreContentBlock;
-(void)setRequestMoreContentBlock:(id)arg1 ;
-(void)setUnsubscribeCommand:(EMListUnsubscribeCommand *)arg1 ;
-(void)setRequestedHeaders:(EMMessageHeaders *)arg1 ;
-(id)initWithContentMessage:(id)arg1 data:(id)arg2 clientIdentifier:(id)arg3 preferredFilename:(id)arg4 extension:(id)arg5 ;
-(void)setContentItem:(id<EMContentItem>)arg1 ;
-(EMSecurityInformation *)securityInformation;
-(id)_initWithRelatedItems:(id)arg1 securityInformation:(id)arg2 ;
-(id)_initWithSandboxedURLWrapper:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3 ;
-(EMMessage *)contentMessage;
-(EMListUnsubscribeCommand *)unsubscribeCommand;
-(BOOL)hasMoreContent;
-(long long)remainingByteCount;
-(NSArray *)replyToList;
-(EMMessageHeaders *)requestedHeaders;
-(id<_EMDistantContentRepresentation>)distantContentRepresentation;
-(void)setDistantContentRepresentation:(id<_EMDistantContentRepresentation>)arg1 ;
-(/*^block*/id)_distantLoaderBlockForContentItem:(id)arg1 ;
-(void)setSecurityInformation:(EMSecurityInformation *)arg1 ;
-(id)initWithData:(id)arg1 clientIdentifier:(id)arg2 extension:(id)arg3 relatedItems:(id)arg4 securityInformation:(id)arg5 ;
-(id)requestAdditionalContentWithCompletion:(/*^block*/id)arg1 ;
-(void)setContentMessage:(EMMessage *)arg1 ;
@end

