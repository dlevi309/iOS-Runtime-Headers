/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSDictionary, NSArray;

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * actionURL; 
@property (nonatomic,copy) NSDictionary * details; 
@property (nonatomic,copy) NSString * dialogId; 
@property (nonatomic,copy) NSString * dialogType; 
@property (nonatomic,copy) NSString * dualAction; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * targetId; 
@property (nonatomic,copy) NSArray * userActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDetails:(NSDictionary *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(NSString *)message;
-(NSString *)dialogId;
-(id)init;
-(void)setActionURL:(NSString *)arg1 ;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setDialogId:(NSString *)arg1 ;
-(NSString *)targetId;
-(NSString *)result;
-(void)setDualAction:(NSString *)arg1 ;
-(void)setUserActions:(NSArray *)arg1 ;
-(NSDictionary *)details;
-(NSArray *)userActions;
-(NSString *)actionURL;
-(NSString *)dialogType;
-(NSString *)dualAction;
-(void)setTargetId:(NSString *)arg1 ;
@end

