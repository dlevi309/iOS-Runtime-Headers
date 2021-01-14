/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol SCNShadable;
@class NSString;

@interface _SCNShadableCompilationIssue : NSObject {

	id<SCNShadable> _shadable;
	NSString* _entryPoint;
	NSString* _effectiveModifier;
	NSString* _message;
	unsigned long long _type;
	long long _line;

}

@property (nonatomic,readonly) id<SCNShadable> shadable;                  //@synthesize shadable=_shadable - In the implementation block
@property (nonatomic,readonly) NSString * entryPoint;                     //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) NSString * effectiveModifier;              //@synthesize effectiveModifier=_effectiveModifier - In the implementation block
@property (nonatomic,readonly) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long line;                            //@synthesize line=_line - In the implementation block
+(id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 line:(long long)arg5 type:(unsigned long long)arg6 ;
-(NSString *)message;
-(NSString *)entryPoint;
-(unsigned long long)type;
-(long long)line;
-(void)dealloc;
-(id<SCNShadable>)shadable;
-(NSString *)effectiveModifier;
@end

