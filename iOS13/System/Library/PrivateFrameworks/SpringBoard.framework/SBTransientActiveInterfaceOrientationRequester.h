/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject {

	long long _orientation;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) long long orientation;               //@synthesize orientation=_orientation - In the implementation block
-(NSString *)reason;
-(long long)orientation;
-(id)initWithOrientation:(long long)arg1 andReason:(id)arg2 ;
@end

