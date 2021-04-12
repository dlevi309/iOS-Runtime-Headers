/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternal:(BOOL)arg1 ;
-(long long)subtype;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(BOOL)internal;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(NSString *)value;
-(void)setValuePreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(RWIProtocolRuntimeObjectPreview *)valuePreview;
@end

