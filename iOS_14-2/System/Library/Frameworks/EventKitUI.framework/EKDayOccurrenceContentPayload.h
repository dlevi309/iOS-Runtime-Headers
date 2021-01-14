/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class UIImage, NSAttributedString;

@interface EKDayOccurrenceContentPayload : NSObject {

	long long _requestId;
	unsigned long long _requestOptions;
	UIImage* _backgroundImage;
	UIImage* _textImage;
	UIImage* _travelTimeImage;
	NSAttributedString* _travelTimeString;

}

@property (nonatomic,readonly) long long requestId;                                //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) unsigned long long requestOptions;                  //@synthesize requestOptions=_requestOptions - In the implementation block
@property (nonatomic,readonly) UIImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,readonly) UIImage * textImage;                                //@synthesize textImage=_textImage - In the implementation block
@property (nonatomic,readonly) UIImage * travelTimeImage;                          //@synthesize travelTimeImage=_travelTimeImage - In the implementation block
@property (nonatomic,readonly) NSAttributedString * travelTimeString;              //@synthesize travelTimeString=_travelTimeString - In the implementation block
-(id)initWithRequestId:(long long)arg1 requestOptions:(unsigned long long)arg2 backgroundImage:(id)arg3 textImage:(id)arg4 travelTimeImage:(id)arg5 travelTimeString:(id)arg6 ;
-(long long)requestId;
-(NSAttributedString *)travelTimeString;
-(UIImage *)textImage;
-(unsigned long long)requestOptions;
-(UIImage *)travelTimeImage;
-(UIImage *)backgroundImage;
@end

