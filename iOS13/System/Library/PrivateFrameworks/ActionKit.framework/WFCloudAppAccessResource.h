/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccountAccessResource.h>

@interface WFCloudAppAccessResource : WFAccountAccessResource
+(void)getAccountWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
+(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)name;
-(id)accounts;
-(id)icon;
-(Class)accountClass;
@end

