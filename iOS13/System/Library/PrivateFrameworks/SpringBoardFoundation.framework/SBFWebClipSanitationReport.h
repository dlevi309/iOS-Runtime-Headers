/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class UIWebClip, NSError;

@interface SBFWebClipSanitationReport : NSObject {

	UIWebClip* _webClip;
	long long _result;
	NSError* _error;

}

@property (nonatomic,readonly) UIWebClip * webClip;               //@synthesize webClip=_webClip - In the implementation block
@property (nonatomic,readonly) long long result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)description;
-(NSError *)error;
-(long long)result;
-(id)initWithWebClip:(id)arg1 result:(long long)arg2 error:(id)arg3 ;
-(UIWebClip *)webClip;
@end

