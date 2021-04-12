/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)apply;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(void)applyForSimulator;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)value;
@end

