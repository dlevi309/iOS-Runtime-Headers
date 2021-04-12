/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class NSString;

@interface FBSDataResetRequest : NSObject {

	long long _mode;
	long long _options;
	NSString* _reason;

}

@property (assign,nonatomic) long long mode;                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
-(long long)options;
-(NSString *)reason;
-(void)setMode:(long long)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(long long)mode;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithMode:(long long)arg1 options:(long long)arg2 reason:(id)arg3 ;
@end

