/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling> {

	BOOL _canGenerateNewAttachment;
	BOOL _allowUserAttachmentSelection;
	NSString* _loggingConsent;

}

@property (nonatomic,copy) NSString * loggingConsent;                        //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL canGenerateNewAttachment;                  //@synthesize canGenerateNewAttachment=_canGenerateNewAttachment - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)disableLogging;
-(BOOL)isLoggingEnabled;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(BOOL)canEnableLogging;
-(void)enableLogging;
-(id)attachmentList;
-(id)attachmentsWithParams:(id)arg1 ;
-(id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3 ;
-(id)_getHostname;
-(BOOL)canGenerateNewAttachment;
-(void)setCanGenerateNewAttachment:(BOOL)arg1 ;
@end

