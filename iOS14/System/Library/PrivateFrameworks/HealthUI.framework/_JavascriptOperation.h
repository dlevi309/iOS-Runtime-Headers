/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString;

@interface _JavascriptOperation : NSObject {

	NSString* _javascript;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSString * javascript;              //@synthesize javascript=_javascript - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)initWithJavascript:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitJavascript:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(NSString *)javascript;
-(void)setJavascript:(NSString *)arg1 ;
@end

