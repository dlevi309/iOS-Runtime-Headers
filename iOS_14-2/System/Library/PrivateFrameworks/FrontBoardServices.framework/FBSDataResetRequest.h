/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mode;
-(long long)options;
-(void)setMode:(long long)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(NSString *)reason;
-(id)initWithMode:(long long)arg1 options:(long long)arg2 reason:(id)arg3 ;
-(void)setReason:(NSString *)arg1 ;
@end

