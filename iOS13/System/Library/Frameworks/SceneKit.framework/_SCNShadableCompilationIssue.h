/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)type;
-(NSString *)message;
-(long long)line;
-(id<SCNShadable>)shadable;
-(NSString *)entryPoint;
-(NSString *)effectiveModifier;
@end

