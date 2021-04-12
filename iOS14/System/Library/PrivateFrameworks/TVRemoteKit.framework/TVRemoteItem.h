/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
*/


@protocol TVRemoteItem <NSObject>
@optional
-(id)remoteItems;
-(BOOL)isRemoteItemCollection;
-(long long)remoteItemIcon;
-(void)handleRemoteAction;

@required
-(id)remoteItemTitle;

@end

