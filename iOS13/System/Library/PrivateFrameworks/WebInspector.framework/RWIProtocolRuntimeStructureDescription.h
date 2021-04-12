/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * fields; 
@property (nonatomic,copy) NSArray * optionalFields; 
@property (nonatomic,copy) NSString * constructorName; 
@property (nonatomic,retain) RWIProtocolRuntimeStructureDescription * prototypeStructure; 
@property (assign,nonatomic) BOOL isImprecise; 
-(NSArray *)fields;
-(void)setFields:(NSArray *)arg1 ;
-(BOOL)isImprecise;
-(void)setOptionalFields:(NSArray *)arg1 ;
-(NSArray *)optionalFields;
-(void)setConstructorName:(NSString *)arg1 ;
-(NSString *)constructorName;
-(void)setPrototypeStructure:(RWIProtocolRuntimeStructureDescription *)arg1 ;
-(RWIProtocolRuntimeStructureDescription *)prototypeStructure;
-(void)setIsImprecise:(BOOL)arg1 ;
@end

