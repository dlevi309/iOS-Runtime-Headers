/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)onSend;
-(void)documentDidChangeForViewModelLink:(id)arg1 ;
-(void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2 ;
-(void)onCancel;
@end

