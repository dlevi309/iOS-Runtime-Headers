/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolJSONObject, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * className; 
@property (nonatomic,retain) RWIProtocolJSONObject * value; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (nonatomic,copy) NSString * objectId; 
@property (assign,nonatomic) int size; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * classPrototype; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * preview; 
-(long long)subtype;
-(id)initWithType:(long long)arg1 ;
-(RWIProtocolRuntimeObjectPreview *)preview;
-(NSString *)stringRepresentation;
-(int)size;
-(NSString *)objectId;
-(NSString *)className;
-(void)setSize:(int)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setValue:(RWIProtocolJSONObject *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(long long)type;
-(void)setPreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(RWIProtocolJSONObject *)value;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setClassPrototype:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)classPrototype;
@end

