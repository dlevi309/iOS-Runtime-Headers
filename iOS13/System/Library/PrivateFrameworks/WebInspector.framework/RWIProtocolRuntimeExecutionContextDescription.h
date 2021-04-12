/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (assign,nonatomic) int identifier; 
@property (assign,nonatomic) BOOL isPageContext; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * frameId; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)identifier;
-(void)setIdentifier:(int)arg1 ;
-(void)setFrameId:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setIsPageContext:(BOOL)arg1 ;
-(id)initWithIdentifier:(int)arg1 isPageContext:(BOOL)arg2 name:(id)arg3 frameId:(id)arg4 ;
-(BOOL)isPageContext;
@end

