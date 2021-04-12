/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * key; 
-(id)initWithValue:(id)arg1 ;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)key;
-(void)setKey:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)value;
@end

