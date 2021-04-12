/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


@class NSURL;

@interface DEAttachmentItemSandboxExtensionHandle : NSObject {

	BOOL _didInit;
	NSURL* _itemURL;
	long long __handle;

}

@property (assign,nonatomic) BOOL didInit;                 //@synthesize didInit=_didInit - In the implementation block
@property (readonly) long long _handle;                    //@synthesize _handle=__handle - In the implementation block
@property (nonatomic,retain) NSURL * itemURL;              //@synthesize itemURL=_itemURL - In the implementation block
-(id)initWithSandboxExtensionToken:(id)arg1 itemURL:(id)arg2 errorOut:(id*)arg3 ;
-(void)setDidInit:(BOOL)arg1 ;
-(void)setItemURL:(NSURL *)arg1 ;
-(long long)_handle;
-(BOOL)didInit;
-(NSURL *)itemURL;
-(void)dealloc;
@end

