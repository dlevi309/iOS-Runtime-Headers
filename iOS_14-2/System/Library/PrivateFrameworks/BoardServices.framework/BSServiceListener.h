/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

@class NSString;


@protocol BSServiceListener <NSObject>
@property (nonatomic,copy,readonly) NSString * service; 
@property (nonatomic,copy,readonly) NSString * instance; 
@required
-(void)didReceiveConnection:(id)arg1;
-(NSString *)instance;
-(NSString *)service;

@end

