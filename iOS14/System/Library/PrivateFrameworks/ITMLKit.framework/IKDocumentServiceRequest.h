/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)responseDictionary;
-(void)onSend;
-(void)setDelegate:(id)arg1 ;
-(IKAppDocument *)appDocument;
-(void)documentDidChangeForViewModelLink:(id)arg1 ;
-(void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2 ;
-(void)responseDictionaryDidChangeForViewModelLink:(id)arg1 ;
-(void)onCancel;
@end

