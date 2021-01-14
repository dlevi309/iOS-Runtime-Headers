/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEConditionEntry.h>

@class NSString;

@interface DEConditionExpression : DEConditionEntry

@property (assign) shared_ptr<siri::dialogengine::ConditionExpression>* This; 
@property (retain) NSString * name; 
@property (retain) NSString * op; 
@property (retain) NSString * value; 
-(BOOL)validate:(id)arg1 ;
-(NSString *)op;
-(id)init;
-(void)setOp:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
@end

