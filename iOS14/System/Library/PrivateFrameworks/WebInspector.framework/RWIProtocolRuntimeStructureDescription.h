/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)fields;
-(BOOL)isImprecise;
-(void)setOptionalFields:(NSArray *)arg1 ;
-(NSArray *)optionalFields;
-(void)setConstructorName:(NSString *)arg1 ;
-(NSString *)constructorName;
-(void)setPrototypeStructure:(RWIProtocolRuntimeStructureDescription *)arg1 ;
-(RWIProtocolRuntimeStructureDescription *)prototypeStructure;
-(void)setIsImprecise:(BOOL)arg1 ;
@end

