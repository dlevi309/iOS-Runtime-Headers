/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSDictionary, NSString;

@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling> {

	NSDictionary* _remediationMap;
	NSDictionary* _URLAppendStringMap;

}

@property (copy) NSDictionary * remediationMap;                     //@synthesize remediationMap=_remediationMap - In the implementation block
@property (copy) NSDictionary * URLAppendStringMap;                 //@synthesize URLAppendStringMap=_URLAppendStringMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyRulesChanged;
-(NSDictionary *)remediationMap;
-(NSDictionary *)URLAppendStringMap;
-(void)handleRemediationForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRemediationMap:(NSDictionary *)arg1 ;
-(void)setURLAppendStringMap:(NSDictionary *)arg1 ;
@end

