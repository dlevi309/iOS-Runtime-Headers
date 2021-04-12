/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CXCallSource.h>

@protocol NSCopying;
@class CXProviderExtensionHostContext, NSExtension;

@interface CXExtensionCallSource : CXCallSource {

	CXProviderExtensionHostContext* _extensionContext;
	NSExtension* _extension;
	id<NSCopying> _requestIdentifier;

}

@property (nonatomic,retain) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) CXProviderExtensionHostContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
-(id)bundle;
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)requestIdentifier;
-(CXProviderExtensionHostContext *)extensionContext;
-(int)processIdentifier;
-(id)init;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)setExtensionContext:(CXProviderExtensionHostContext *)arg1 ;
-(id)vendorProtocolDelegate;
-(NSExtension *)extension;
-(id)identifier;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

