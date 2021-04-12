/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)message;
-(unsigned long long)type;
-(id)_initWithMessage:(id)arg1 type:(unsigned long long)arg2 ;
@end

