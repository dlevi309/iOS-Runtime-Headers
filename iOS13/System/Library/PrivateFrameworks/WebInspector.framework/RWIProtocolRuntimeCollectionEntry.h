/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * key; 
-(RWIProtocolRuntimeRemoteObject *)key;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setKey:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(id)initWithValue:(id)arg1 ;
@end

