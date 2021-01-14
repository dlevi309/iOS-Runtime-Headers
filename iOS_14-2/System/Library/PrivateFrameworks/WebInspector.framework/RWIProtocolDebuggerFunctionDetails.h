/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDebuggerLocation, NSString, NSArray;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSArray * scopeChain; 
-(RWIProtocolDebuggerLocation *)location;
-(id)initWithLocation:(id)arg1 ;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(NSString *)name;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
@end

