/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDOMDocument.h>
#import <libobjc.A.dylib/_IKJSDOMDocumentProxy.h>
#import <libobjc.A.dylib/_IKJSDOMDocument.h>
#import <libobjc.A.dylib/IKJSDOMXPathEvaluator.h>

@protocol IKNetworkRequestLoader, IKJSDOMDocumentAppBridge;
@class IKDOMImplementation, IKDOMElement, NSString, IKJSNavigationDocument;

@interface IKDOMDocument : IKDOMNode <NSObject, IKJSDOMDocument, _IKJSDOMDocumentProxy, _IKJSDOMDocument, IKJSDOMXPathEvaluator> {

	struct {
		BOOL hasSetNeedsUpdate;
		BOOL hasSnapshotImpressions;
		BOOL hasRecordedImpressions;
		BOOL hasRecordedImpressionsCallback;
		BOOL hasRecordedImpressionsMatchingCallback;
		BOOL hasImpressionsMatchingTag;
		BOOL hasScrollToTop;
		BOOL hasRunTest;
	}  _appBridgeFlags;
	BOOL _embeddedScriptExecuted;
	id<IKNetworkRequestLoader> __requestLoader;
	id<IKJSDOMDocumentAppBridge> _appBridge;
	unsigned long long _itmlIDSequence;
	NSString* __documentURI;

}

@property (assign,getter=isEmbeddedScriptExecuted,nonatomic) BOOL embeddedScriptExecuted;              //@synthesize embeddedScriptExecuted=_embeddedScriptExecuted - In the implementation block
@property (assign,nonatomic) unsigned long long itmlIDSequence;                                        //@synthesize itmlIDSequence=_itmlIDSequence - In the implementation block
@property (nonatomic,readonly) id<IKNetworkRequestLoader> _requestLoader;                              //@synthesize _requestLoader=__requestLoader - In the implementation block
@property (setter=_setDocumentURI:,nonatomic,retain) NSString * _documentURI;                          //@synthesize _documentURI=__documentURI - In the implementation block
@property (assign,nonatomic,__weak) id<IKJSDOMDocumentAppBridge> appBridge;                            //@synthesize appBridge=_appBridge - In the implementation block
@property (assign,nonatomic,__weak) IKJSNavigationDocument * navigationDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) IKDOMImplementation * implementation; 
@property (nonatomic,retain,readonly) IKDOMElement * documentElement; 
@property (nonatomic,retain,readonly) NSString * inputEncoding; 
@property (nonatomic,retain,readonly) NSString * xmlEncoding; 
@property (assign,nonatomic) BOOL xmlStandalone; 
@property (nonatomic,retain) NSString * xmlVersion; 
@property (assign,nonatomic) BOOL strictErrorChecking; 
@property (nonatomic,retain) NSString * documentURI; 
+(xmlDoc*)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id*)arg3 ;
+(void)_resetUpdatesForNode:(id)arg1 ;
-(IKDOMImplementation *)implementation;
-(long long)nodeType;
-(void)setNeedsUpdate;
-(id)createTextNode:(id)arg1 ;
-(id)getElementById:(id)arg1 ;
-(IKDOMElement *)documentElement;
-(id)createDocumentFragment;
-(id)nodeName;
-(void)scrollToTop;
-(id)getElementsByTagName:(id)arg1 ;
-(id)createElement:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)dealloc;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(NSString *)arg1 ;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1 ;
-(NSString *)documentURI;
-(void)setDocumentURI:(NSString *)arg1 ;
-(id)createComment:(id)arg1 ;
-(id)createCDATASection:(id)arg1 ;
-(id)adoptNode:(id)arg1 ;
-(id)createExpression:(id)arg1 :(id)arg2 ;
-(id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(long long)arg4 :(id)arg5 ;
-(id<IKNetworkRequestLoader>)_requestLoader;
-(id)snapshotImpressions;
-(id)initWithAppContext:(id)arg1 ;
-(void)setAppBridge:(id<IKJSDOMDocumentAppBridge>)arg1 ;
-(id<IKJSDOMDocumentAppBridge>)appBridge;
-(id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id*)arg3 ;
-(void)setNavigationDocument:(IKJSNavigationDocument *)arg1 ;
-(IKJSNavigationDocument *)navigationDocument;
-(void)prepareForPresentationWithExtraInfo:(id)arg1 ;
-(id)recordedImpressions:(id)arg1 ;
-(BOOL)strictErrorChecking;
-(void)setStrictErrorChecking:(BOOL)arg1 ;
-(void)runTest:(id)arg1 :(id)arg2 ;
-(id)matchingImpressions:(id)arg1 :(id)arg2 ;
-(void)recordedImpressions:(id)arg1 :(id)arg2 ;
-(void)recordedImpressionsMatching:(id)arg1 :(id)arg2 :(id)arg3 ;
-(BOOL)isEmbeddedScriptExecuted;
-(void)_executeEmbeddedScriptWithExtraInfo:(id)arg1 ;
-(NSString *)_documentURI;
-(void)_updateITMLIDRecursivelyForNodePtr:(xmlNode*)arg1 ;
-(void)setITMLIDForNode:(id)arg1 ;
-(id)asPrivateIKJSDOMDocument;
-(id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id*)arg3 ;
-(id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2 ;
-(BOOL)markUpdated;
-(void)swapITMLIDForNode:(id)arg1 withITMLIDForNode:(id)arg2 ;
-(void)setEmbeddedScriptExecuted:(BOOL)arg1 ;
-(unsigned long long)itmlIDSequence;
-(void)setItmlIDSequence:(unsigned long long)arg1 ;
-(void)_setDocumentURI:(id)arg1 ;
@end

