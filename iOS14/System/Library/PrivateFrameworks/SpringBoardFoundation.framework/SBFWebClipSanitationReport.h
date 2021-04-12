/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIWebClip *)webClip;
-(id)initWithWebClip:(id)arg1 result:(long long)arg2 error:(id)arg3 ;
-(NSError *)error;
-(id)description;
-(long long)result;
@end

