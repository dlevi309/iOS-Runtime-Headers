/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)backgroundImage;
-(long long)requestId;
-(unsigned long long)requestOptions;
-(NSAttributedString *)travelTimeString;
-(id)initWithRequestId:(long long)arg1 requestOptions:(unsigned long long)arg2 backgroundImage:(id)arg3 textImage:(id)arg4 travelTimeImage:(id)arg5 travelTimeString:(id)arg6 ;
-(UIImage *)textImage;
-(UIImage *)travelTimeImage;
@end

