/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)localizedName;
-(CGSize)size;
-(unsigned long long)displayZoomOption;
-(id)initWithDisplayZoomOption:(unsigned long long)arg1 localizedName:(id)arg2 size:(CGSize)arg3 ;
@end

