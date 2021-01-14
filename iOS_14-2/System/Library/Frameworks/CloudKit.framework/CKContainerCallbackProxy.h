/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKWeakObjectCallbackProxy.h>
#import <libobjc.A.dylib/CKXPCClient.h>

@class NSString;

@interface CKContainerCallbackProxy : CKWeakObjectCallbackProxy <CKXPCClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainer:(id)arg1 ;
-(void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2 ;
@end

