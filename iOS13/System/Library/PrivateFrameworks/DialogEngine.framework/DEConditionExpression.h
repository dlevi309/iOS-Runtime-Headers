/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEConditionEntry.h>

@class NSString;

@interface DEConditionExpression : DEConditionEntry

@property (assign) shared_ptr<siri::dialogengine::ConditionExpression>* This; 
@property (assign) NSString * name; 
@property (assign) NSString * op; 
@property (assign) NSString * value; 
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(void)setOp:(NSString *)arg1 ;
-(NSString *)op;
@end

