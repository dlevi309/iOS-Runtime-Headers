/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * aliases; 
@property (nonatomic,copy) NSArray * longhands; 
@property (nonatomic,copy) NSArray * values; 
@property (assign,nonatomic) BOOL inherited; 
+(id)safe_initWithName:(id)arg1 ;
-(NSArray *)aliases;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setAliases:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)inherited;
-(void)setInherited:(BOOL)arg1 ;
-(void)setLonghands:(NSArray *)arg1 ;
-(NSArray *)longhands;
@end

