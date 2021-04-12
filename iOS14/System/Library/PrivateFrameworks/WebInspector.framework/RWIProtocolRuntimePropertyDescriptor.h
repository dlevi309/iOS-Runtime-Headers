/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (assign,nonatomic) BOOL writable; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * get; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * set; 
@property (assign,nonatomic) BOOL wasThrown; 
@property (assign,nonatomic) BOOL configurable; 
@property (assign,nonatomic) BOOL enumerable; 
@property (assign,nonatomic) BOOL isOwn; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * symbol; 
@property (assign,nonatomic) BOOL nativeGetter; 
-(void)setSet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(BOOL)writable;
-(BOOL)isOwn;
-(NSString *)name;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)get;
-(RWIProtocolRuntimeRemoteObject *)symbol;
-(void)setConfigurable:(BOOL)arg1 ;
-(void)setSymbol:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)set;
-(void)setWritable:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setGet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setWasThrown:(BOOL)arg1 ;
-(BOOL)wasThrown;
-(BOOL)configurable;
-(void)setEnumerable:(BOOL)arg1 ;
-(BOOL)enumerable;
-(void)setIsOwn:(BOOL)arg1 ;
-(void)setNativeGetter:(BOOL)arg1 ;
-(BOOL)nativeGetter;
@end

