/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUReviewScreenSpec : NSObject {

	BOOL _allowSendButton;
	unsigned long long _options;
	unsigned long long _oneUpOptions;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long oneUpOptions;              //@synthesize oneUpOptions=_oneUpOptions - In the implementation block
@property (nonatomic,readonly) BOOL allowSendButton;                         //@synthesize allowSendButton=_allowSendButton - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)oneUpOptions;
-(unsigned long long)options;
-(BOOL)allowSendButton;
@end

