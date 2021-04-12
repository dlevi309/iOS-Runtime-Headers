/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccountAccessResource.h>

@interface WFCloudAppAccessResource : WFAccountAccessResource
+(void)getAccountWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
+(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)accounts;
-(Class)accountClass;
-(id)icon;
-(id)name;
@end

