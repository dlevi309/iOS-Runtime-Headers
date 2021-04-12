/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * valuePreview; 
@property (assign,nonatomic) BOOL internal; 
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)subtype;
-(BOOL)internal;
-(void)setInternal:(BOOL)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(void)setValuePreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(RWIProtocolRuntimeObjectPreview *)valuePreview;
@end

