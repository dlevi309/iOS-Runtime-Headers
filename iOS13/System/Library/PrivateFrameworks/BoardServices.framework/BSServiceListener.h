/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

@class NSString;


@protocol BSServiceListener <NSObject>
@property (nonatomic,copy,readonly) NSString * service; 
@property (nonatomic,copy,readonly) NSString * instance; 
@required
-(NSString *)instance;
-(NSString *)service;
-(void)didReceiveConnection:(id)arg1;

@end

