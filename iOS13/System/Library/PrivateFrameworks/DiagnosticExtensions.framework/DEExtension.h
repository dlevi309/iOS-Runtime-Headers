/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


@class NSString, DEExtensionHostContext, NSExtension;

@interface DEExtension : NSObject {

	BOOL _isLoggingEnabled;
	BOOL _allowUserAttachmentSelection;
	NSString* _attachmentsName;
	NSString* _identifier;
	DEExtensionHostContext* _context;
	NSString* _loggingConsent;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSString * attachmentsName;                     //@synthesize attachmentsName=_attachmentsName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) DEExtensionHostContext * context;               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isLoggingEnabled;                          //@synthesize isLoggingEnabled=_isLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSString * loggingConsent;                      //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(DEExtensionHostContext *)context;
-(void)setContext:(DEExtensionHostContext *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(BOOL)isLoggingEnabled;
-(void)attachmentsForParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(NSString *)attachmentsName;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)endUsingExtension;
-(void)performWithHostContext:(/*^block*/id)arg1 ;
-(id)initWithNSExtension:(id)arg1 ;
-(void)setAttachmentsName:(NSString *)arg1 ;
-(void)setIsLoggingEnabled:(BOOL)arg1 ;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
@end

