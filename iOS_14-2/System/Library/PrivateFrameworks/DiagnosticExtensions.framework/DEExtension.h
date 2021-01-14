/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


@class NSString, DEExtensionHostContext, NSExtension, NSRecursiveLock;

@interface DEExtension : NSObject {

	BOOL _isLoggingEnabled;
	BOOL _allowUserAttachmentSelection;
	NSString* _attachmentsName;
	NSString* _identifier;
	DEExtensionHostContext* _context;
	NSString* _loggingConsent;
	NSExtension* _extension;
	NSRecursiveLock* _extensionHostLoadingLock;

}

@property (nonatomic,retain) NSExtension * extension;                        //@synthesize extension=_extension - In the implementation block
@property (retain) NSRecursiveLock * extensionHostLoadingLock;               //@synthesize extensionHostLoadingLock=_extensionHostLoadingLock - In the implementation block
@property (nonatomic,retain) NSString * attachmentsName;                     //@synthesize attachmentsName=_attachmentsName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) DEExtensionHostContext * context;               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isLoggingEnabled;                          //@synthesize isLoggingEnabled=_isLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSString * loggingConsent;                      //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
-(void)setExtension:(NSExtension *)arg1 ;
-(DEExtensionHostContext *)context;
-(id)description;
-(NSExtension *)extension;
-(BOOL)checkAndTeardown;
-(BOOL)isLoggingEnabled;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(NSRecursiveLock *)extensionHostLoadingLock;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setExtensionHostLoadingLock:(NSRecursiveLock *)arg1 ;
-(void)createExtensionHostContextCompletion:(/*^block*/id)arg1 ;
-(void)endUsingExtension;
-(void)performWithHostContext:(/*^block*/id)arg1 ;
-(void)setupWithParameters:(id)arg1 session:(id)arg2 expirationDate:(id)arg3 ;
-(Class)extensionTrackerClass;
-(id)initWithNSExtension:(id)arg1 ;
-(void)attachmentsForParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)setupWithParameters:(id)arg1 session:(id)arg2 ;
-(void)teardownWithParameters:(id)arg1 session:(id)arg2 ;
-(NSString *)attachmentsName;
-(void)setAttachmentsName:(NSString *)arg1 ;
-(void)setIsLoggingEnabled:(BOOL)arg1 ;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
-(void)setContext:(DEExtensionHostContext *)arg1 ;
@end

