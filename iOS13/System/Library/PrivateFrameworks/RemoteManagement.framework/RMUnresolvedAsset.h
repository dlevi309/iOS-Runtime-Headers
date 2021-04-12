/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

@class NSString;


@protocol RMUnresolvedAsset
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

