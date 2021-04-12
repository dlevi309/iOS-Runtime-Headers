/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDebuggerLocation, NSString, NSArray;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSArray * scopeChain; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(RWIProtocolDebuggerLocation *)location;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
@end

