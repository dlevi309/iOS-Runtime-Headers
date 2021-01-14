/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, FPItem;

@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding> {

	NSData* _scope;
	BOOL _readonly;
	BOOL _backedByFileProvider;
	NSURL* _url;
	FPItem* _fpItem;
	NSURL* _deleteAfterUseURL;

}

@property (nonatomic,readonly) NSURL * url;                                                          //@synthesize url=_url - In the implementation block
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly;                                      //@synthesize readonly=_readonly - In the implementation block
@property (getter=isBackedByFileProvider,nonatomic,readonly) BOOL backedByFileProvider;              //@synthesize backedByFileProvider=_backedByFileProvider - In the implementation block
@property (nonatomic,readonly) FPItem * fpItem;                                                      //@synthesize fpItem=_fpItem - In the implementation block
@property (nonatomic,retain) NSURL * deleteAfterUseURL;                                              //@synthesize deleteAfterUseURL=_deleteAfterUseURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(id)nsURLWrapper;
-(id)initWithURL:(id)arg1 readonly:(BOOL)arg2 extensionClass:(id)arg3 ;
-(id)initWithFPItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FPItem *)fpItem;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 readonly:(BOOL)arg2 ;
-(id)description;
-(BOOL)isBackedByFileProvider;
-(BOOL)isReadonly;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNSURLWrapper:(id)arg1 ;
-(void)_deleteTemporaryFilesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 issueExtension:(BOOL)arg2 readonly:(BOOL)arg3 extensionClass:(id)arg4 ;
-(id)initWithURLWithoutIssuingExtension:(id)arg1 ;
-(void)deleteTemporaryFilesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)deleteAfterUseURL;
-(void)setDeleteAfterUseURL:(NSURL *)arg1 ;
@end

