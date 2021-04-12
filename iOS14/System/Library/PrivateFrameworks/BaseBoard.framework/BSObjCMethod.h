/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray, BSObjCArgument;

@interface BSObjCMethod : NSObject <BSDescriptionProviding> {

	long long _required;
	NSString* _name;
	NSString* _encoding;
	SEL _selector;
	NSArray* _arguments;
	BSObjCArgument* _returnValue;

}

@property (nonatomic,copy,readonly) NSString * encoding;                           //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) SEL selector;                                       //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) BSObjCArgument * returnValue;                //@synthesize returnValue=_returnValue - In the implementation block
@property (nonatomic,retain,readonly) NSArray * arguments;                         //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,retain,readonly) BSObjCArgument * firstArgument; 
@property (nonatomic,retain,readonly) BSObjCArgument * lastArgument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(SEL)selector;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)encoding;
-(BSObjCArgument *)returnValue;
-(NSString *)name;
-(NSArray *)arguments;
-(NSString *)description;
-(BSObjCArgument *)firstArgument;
-(BSObjCArgument *)lastArgument;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
@end

