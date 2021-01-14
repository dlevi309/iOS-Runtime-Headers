/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/_EMDistantContentRepresentation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@protocol EMContentItem, _EMDistantContentRepresentation;
@class EFInvocationToken, NSURL, NSArray, EMMessage, EMSecurityInformation, CSSearchableItem, EMListUnsubscribeCommand, EMMessageHeaders, EFSandboxedURLWrapper, NSString;

@interface EMContentRepresentation : NSObject <_EMDistantContentRepresentation, NSSecureCoding, EFPubliclyDescribable> {

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
	/*^block*/id _listUnsubscribeBlock;

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
@property (nonatomic,copy) id listUnsubscribeBlock;                                                         //@synthesize listUnsubscribeBlock=_listUnsubscribeBlock - In the implementation block
@property (nonatomic,readonly) NSURL * contentURL; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)temporaryURLWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 pathExtension:(id)arg4 cleanupInvocable:(id*)arg5 error:(id*)arg6 ;
+(id)contentRequestDelegateInterface;
+(id)distantContentRepresentationInterface;
-(id)requestRepresentationForItemWithObjectID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)requestUpdatedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)contentURL;
-(NSArray *)relatedContentItems;
-(void)setRelatedContentItems:(NSArray *)arg1 ;
-(NSURL *)publicMessageURL;
-(void)setPublicMessageURL:(NSURL *)arg1 ;
-(void)setReplyToList:(NSArray *)arg1 ;
-(id)initWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 extension:(id)arg4 relatedItems:(id)arg5 securityInformation:(id)arg6 ;
-(void)setHasMoreContent:(BOOL)arg1 ;
-(id)initWithContentURL:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3 ;
-(void)setRemainingByteCount:(long long)arg1 ;
-(void)mergeUpdatedRepresentation:(id)arg1 ;
-(id)requestMoreContentBlock;
-(void)setRequestMoreContentBlock:(id)arg1 ;
-(EMListUnsubscribeCommand *)unsubscribeCommand;
-(void)setListUnsubscribeBlock:(id)arg1 ;
-(void)setUnsubscribeCommand:(EMListUnsubscribeCommand *)arg1 ;
-(void)setRequestedHeaders:(EMMessageHeaders *)arg1 ;
-(id)initWithContentMessage:(id)arg1 data:(id)arg2 clientIdentifier:(id)arg3 preferredFilename:(id)arg4 extension:(id)arg5 ;
-(NSString *)ef_publicDescription;
-(EMSecurityInformation *)securityInformation;
-(BOOL)hasMoreContent;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(long long)arg1 ;
-(NSString *)debugDescription;
-(EFSandboxedURLWrapper *)urlWrapper;
-(void)setContentItem:(id<EMContentItem>)arg1 ;
-(long long)transportType;
-(id)performUnsubscribeAction:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithRelatedItems:(id)arg1 securityInformation:(id)arg2 ;
-(EMMessage *)contentMessage;
-(id)_initWithSandboxedURLWrapper:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3 ;
-(long long)remainingByteCount;
-(EMMessageHeaders *)requestedHeaders;
-(id<_EMDistantContentRepresentation>)distantContentRepresentation;
-(void)setDistantContentRepresentation:(id<_EMDistantContentRepresentation>)arg1 ;
-(/*^block*/id)_distantLoaderBlockForContentItem:(id)arg1 ;
-(void)setSecurityInformation:(EMSecurityInformation *)arg1 ;
-(id)listUnsubscribeBlock;
-(id)initWithData:(id)arg1 clientIdentifier:(id)arg2 extension:(id)arg3 relatedItems:(id)arg4 securityInformation:(id)arg5 ;
-(id)requestAdditionalContentWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id<EMContentItem>)contentItem;
-(void)setContentMessage:(EMMessage *)arg1 ;
-(void)setUrlWrapper:(EFSandboxedURLWrapper *)arg1 ;
-(CSSearchableItem *)searchableItem;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(NSArray *)replyToList;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
-(void)dealloc;
-(void)addInvalidationHandler:(/*^block*/id)arg1 ;
@end

