/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKServiceRequest.h>
#import <libobjc.A.dylib/IKJSViewModelLinkDelegate.h>

@class IKJSViewModelLink, NSDictionary, IKAppDocument, NSString;

@interface IKDocumentServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {

	IKJSViewModelLink* _link;
	struct {
		BOOL hasResponseDictionaryDidChange;
		BOOL hasDocumentDidChange;
	}  _dsrDelegateFlags;
	NSDictionary* _responseDictionary;
	IKAppDocument* _appDocument;

}

@property (copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) IKAppDocument * appDocument;                         //@synthesize appDocument=_appDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(IKAppDocument *)appDocument;
-(void)documentDidChangeForViewModelLink:(id)arg1 ;
-(void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2 ;
-(void)responseDictionaryDidChangeForViewModelLink:(id)arg1 ;
-(void)onSend;
-(void)onCancel;
@end

