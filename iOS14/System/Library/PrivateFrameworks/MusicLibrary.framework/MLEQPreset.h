/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString;

@interface MLEQPreset : NSObject {

	NSString* _name;
	NSString* _localizedName;
	int _builtInPresetType;

}
+(id)eqPresetForName:(id)arg1 ;
+(id)eqPresetForBuiltInPresetType:(int)arg1 ;
-(id)localizedName;
-(id)name;
-(int)typeForAVController;
-(id)initWithBuiltInPresetType:(int)arg1 ;
-(int)builtInPresetType;
@end

