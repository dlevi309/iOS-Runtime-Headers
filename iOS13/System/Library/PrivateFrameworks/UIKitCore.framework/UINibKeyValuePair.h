/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UINibKeyValuePair : NSObject {

	id object;
	NSString* keyPath;
	id value;

}

@property (nonatomic,readonly) id object; 
@property (nonatomic,copy,readonly) NSString * keyPath; 
@property (nonatomic,readonly) id value; 
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(NSString *)keyPath;
-(void)applyForSimulator;
-(void)apply;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
@end

