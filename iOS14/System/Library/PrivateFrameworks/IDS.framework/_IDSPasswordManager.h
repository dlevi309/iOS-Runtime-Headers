/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/_IDSPasswordManager.h>

@protocol _IDSPasswordManager <NSObject>
@required
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4;

@end


@class NSString;

@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

