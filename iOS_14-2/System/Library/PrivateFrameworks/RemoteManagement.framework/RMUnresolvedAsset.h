/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

@class NSString;


@protocol RMUnresolvedAsset
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

