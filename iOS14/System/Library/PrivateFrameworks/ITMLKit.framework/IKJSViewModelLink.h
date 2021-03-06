/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSViewModelLink.h>
@class IKDOMDocument;


@protocol IKJSViewModelLink <JSExport>
@property (nonatomic,retain) IKDOMDocument * document; 
@required
-(void)setDocument:(id)arg1;
-(IKDOMDocument *)document;
-(void)close:(id)arg1;

@end

#import <libobjc.A.dylib/_IKJSViewModelLinkProxy.h>
#import <libobjc.A.dylib/_IKJSViewModelLink.h>

@protocol IKJSViewModelLinkDelegate;
@class IKDOMDocument, NSDictionary;

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink> {

	BOOL _isClosed;
	struct {
		BOOL hasDocumentDidChange;
		BOOL hasResponseDictionaryDidChange;
	}  _delegateFlags;
	IKDOMDocument* _document;
	NSDictionary* _responseDictionary;
	id<IKJSViewModelLinkDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IKJSViewModelLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;                            //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) IKDOMDocument * document;                                   //@synthesize document=_document - In the implementation block
-(id)init;
-(id<IKJSViewModelLinkDelegate>)delegate;
-(void)setDocument:(IKDOMDocument *)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<IKJSViewModelLinkDelegate>)arg1 ;
-(IKDOMDocument *)document;
-(void)cancel;
-(void)dealloc;
-(void)close:(id)arg1 ;
-(id)asPrivateIKJSViewModelLink;
-(void)_unhandled;
@end

