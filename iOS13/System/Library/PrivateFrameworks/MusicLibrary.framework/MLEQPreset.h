/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)name;
-(id)localizedName;
-(int)typeForAVController;
-(id)initWithBuiltInPresetType:(int)arg1 ;
-(int)builtInPresetType;
@end

