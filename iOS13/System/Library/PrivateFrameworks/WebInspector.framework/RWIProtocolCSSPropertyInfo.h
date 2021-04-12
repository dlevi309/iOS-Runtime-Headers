/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSArray *)aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(void)setInherited:(BOOL)arg1 ;
-(void)setLonghands:(NSArray *)arg1 ;
-(BOOL)inherited;
-(NSArray *)longhands;
@end

