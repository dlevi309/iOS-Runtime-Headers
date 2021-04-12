/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)identifier;
-(int)processIdentifier;
-(id)bundle;
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(CXProviderExtensionHostContext *)extensionContext;
-(id<NSCopying>)requestIdentifier;
-(id)initWithExtension:(id)arg1 ;
-(id)vendorProtocolDelegate;
-(void)setExtensionContext:(CXProviderExtensionHostContext *)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

