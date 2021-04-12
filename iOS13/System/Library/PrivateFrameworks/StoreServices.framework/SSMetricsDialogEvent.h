/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)result;
-(void)setResult:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSArray *)userActions;
-(void)setUserActions:(NSArray *)arg1 ;
-(NSString *)dialogId;
-(void)setDialogId:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)actionURL;
-(NSString *)dialogType;
-(NSString *)dualAction;
-(NSString *)targetId;
-(void)setActionURL:(NSString *)arg1 ;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setDualAction:(NSString *)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
@end

