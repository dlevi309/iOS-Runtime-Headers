/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(int)size;
-(RWIProtocolJSONObject *)value;
-(void)setValue:(RWIProtocolJSONObject *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)className;
-(NSString *)stringRepresentation;
-(void)setSize:(int)arg1 ;
-(long long)subtype;
-(RWIProtocolRuntimeObjectPreview *)preview;
-(void)setPreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setClassPrototype:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)classPrototype;
@end

