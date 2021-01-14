/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isReadable;
-(id)data;
-(BOOL)isBundle;
-(id)startWriteAccess;
-(void)stopAccess;
-(id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(id)securityScopeToken;
-(void)_attachSecurityScope;
-(id)_temporaryReadURL:(id)arg1 error:(id*)arg2 ;
-(void)_removeTemporaryReadURL;
-(id)startReadAccess;
-(void)dealloc;
@end

