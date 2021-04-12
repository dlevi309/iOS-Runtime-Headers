/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/


@class NSString;

@interface CCUIStatusUpdate : NSObject {

	NSString* _message;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)statusUpdateWithMessage:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(NSString *)message;
-(id)_initWithMessage:(id)arg1 type:(unsigned long long)arg2 ;
@end

