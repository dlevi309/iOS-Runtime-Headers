/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface _SFBannerModel : NSObject {

	NSString* _title;
	NSString* _message;
	/*^block*/id _dismissHandler;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) id dismissHandler;                    //@synthesize dismissHandler=_dismissHandler - In the implementation block
+(id)bannerWithTitle:(id)arg1 message:(id)arg2 dismissHandler:(/*^block*/id)arg3 ;
-(NSString *)title;
-(NSString *)message;
-(id)dismissHandler;
@end

