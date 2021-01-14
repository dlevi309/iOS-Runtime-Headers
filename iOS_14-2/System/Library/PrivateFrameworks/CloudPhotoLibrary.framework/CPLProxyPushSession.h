/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLProxySession.h>
#import <libobjc.A.dylib/CPLPushChangeSessionImplementation.h>

@class NSString;

@interface CPLProxyPushSession : CPLProxySession <CPLPushChangeSessionImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

