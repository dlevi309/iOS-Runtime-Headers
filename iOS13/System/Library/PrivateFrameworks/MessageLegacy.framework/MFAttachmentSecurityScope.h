/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSFileCoordinator, NSURL, NSData;

@interface MFAttachmentSecurityScope : NSObject {

	NSFileCoordinator* _fileCoordinator;
	NSURL* _securityScopedURL;
	NSData* _securityScopeToken;
	NSURL* _secureReadURL;
	BOOL _securedRead;
	NSURL* _secureWriteURL;
	BOOL _securedWrite;

}
+(id)securityScopedURL:(id)arg1 withToken:(id)arg2 ;
+(id)securityScopedURL:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(BOOL)isReadable;
-(id)startWriteAccess;
-(void)stopAccess;
-(BOOL)isBundle;
-(id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(void)_attachSecurityScope;
-(id)_temporaryReadURL:(id)arg1 error:(id*)arg2 ;
-(void)_removeTemporaryReadURL;
-(id)securityScopeToken;
-(id)startReadAccess;
@end

