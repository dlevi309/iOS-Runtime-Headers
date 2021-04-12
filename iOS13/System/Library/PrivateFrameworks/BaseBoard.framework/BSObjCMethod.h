/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray, BSObjCArgument;

@interface BSObjCMethod : NSObject <BSDescriptionProviding> {

	NSString* _name;
	NSString* _encoding;
	SEL _selector;
	NSArray* _arguments;
	BSObjCArgument* _returnValue;
	long long _required;

}

@property (assign,nonatomic) long long required;                                   //@synthesize required=_required - In the implementation block
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
+(id)methodWithSelector:(SEL)arg1 typeEncoding:(const char*)arg2 ;
+(id)methodWithMethod:(objc_methodRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(SEL)selector;
-(NSArray *)arguments;
-(NSString *)encoding;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BSObjCArgument *)returnValue;
-(BSObjCArgument *)firstArgument;
-(BSObjCArgument *)lastArgument;
-(long long)required;
-(void)setRequired:(long long)arg1 ;
@end

