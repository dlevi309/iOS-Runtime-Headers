/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <libobjc.A.dylib/EMContentItemRequestDelegate.h>

@class NSString;

@interface MessageContentRepresentationRequestDelegate : NSObject <EMContentItemRequestDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentObjectID:(id)arg1 generateHTMLSnippetsForRelatedContentItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)contentObjectID:(id)arg1 placeholderHTMLForEmptyContentWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)contentObjectID:(id)arg1 generateHTMLSnippetsForMailDropContentItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

