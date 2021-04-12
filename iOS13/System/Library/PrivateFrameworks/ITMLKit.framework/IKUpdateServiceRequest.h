/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKServiceRequest.h>
#import <libobjc.A.dylib/IKJSViewModelLinkDelegate.h>

@class IKJSViewModelLink, NSString;

@interface IKUpdateServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {

	IKJSViewModelLink* _link;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)documentDidChangeForViewModelLink:(id)arg1 ;
-(void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2 ;
-(void)onSend;
-(void)onCancel;
@end

