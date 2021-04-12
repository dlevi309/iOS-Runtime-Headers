/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSPurchaseRequestDelegate.h>

@class SSPurchaseRequest, NSString;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate <SSPurchaseRequestDelegate>

@property (nonatomic,retain,readonly) SSPurchaseRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithPurchases:(id)arg1 ;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end

