/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIRuntimeConnection.h>

@interface UIRuntimeEventConnection : UIRuntimeConnection {

	unsigned long long eventMask;

}

@property (assign) unsigned long long eventMask; 
@property (readonly) SEL action; 
@property (readonly) id target; 
-(unsigned long long)eventMask;
-(void)connect;
-(void)encodeWithCoder:(id)arg1 ;
-(SEL)action;
-(void)connectForSimulator;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)target;
-(void)setEventMask:(unsigned long long)arg1 ;
@end

