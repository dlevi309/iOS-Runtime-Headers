/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class NSString;

@interface MRUSubtitleValue : NSObject {

	NSString* _text;
	long long _accessory;

}

@property (nonatomic,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long accessory;              //@synthesize accessory=_accessory - In the implementation block
-(long long)accessory;
-(id)description;
-(NSString *)text;
-(id)initWithText:(id)arg1 accessory:(long long)arg2 ;
-(BOOL)isEqualToSubtitleValue:(id)arg1 ;
@end

