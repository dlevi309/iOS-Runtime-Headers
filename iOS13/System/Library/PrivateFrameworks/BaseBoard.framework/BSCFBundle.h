/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSCFBundle : NSObject {

	CFBundleRef _cfBundle;

}
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)bundleIdentifier;
-(id)initWithPath:(id)arg1 ;
-(id)infoDictionary;
-(id)localizedInfoDictionary;
-(id)bundlePath;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)executablePath;
-(id)_initWithCFBundle:(CFBundleRef)arg1 ;
-(id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(CFBundleRef)cfBundle;
@end

