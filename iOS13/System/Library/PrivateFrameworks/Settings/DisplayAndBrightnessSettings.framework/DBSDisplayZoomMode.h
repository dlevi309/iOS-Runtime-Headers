/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/


#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
@class NSString;

@interface DBSDisplayZoomMode : NSObject {

	unsigned long long _displayZoomOption;
	NSString* _localizedName;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned long long displayZoomOption;              //@synthesize displayZoomOption=_displayZoomOption - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                          //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(NSString *)localizedName;
-(unsigned long long)displayZoomOption;
-(id)initWithDisplayZoomOption:(unsigned long long)arg1 localizedName:(id)arg2 size:(CGSize)arg3 ;
@end

