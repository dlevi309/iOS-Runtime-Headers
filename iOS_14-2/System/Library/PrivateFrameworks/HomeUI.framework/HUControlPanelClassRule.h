/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUControlPanelRule.h>

@class Protocol, NSString;

@interface HUControlPanelClassRule : NSObject <HUControlPanelRule> {

	double _priority;
	Class _class;
	Protocol* _protocol;

}

@property (nonatomic,copy) Class class;                             //@synthesize class=_class - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                   //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) double priority;                       //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleWithControlItemClass:(Class)arg1 ;
+(id)ruleWithControlItemProtocol:(id)arg1 ;
-(Class)class;
-(void)setProtocol:(Protocol *)arg1 ;
-(void)setClass:(Class)arg1 ;
-(Protocol *)protocol;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(BOOL)ruleMatchesItem:(id)arg1 ;
-(id)initWithControlItemClass:(Class)arg1 protocol:(id)arg2 ;
@end

