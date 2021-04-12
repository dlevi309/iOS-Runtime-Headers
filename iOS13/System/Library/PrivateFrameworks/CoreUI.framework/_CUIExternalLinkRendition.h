/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSString, NSMutableSet;

@interface _CUIExternalLinkRendition : CUIThemeRendition {

	NSString* _assetPackIdentifier;
	NSMutableSet* _externalTags;

}
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)assetPackIdentifier;
-(id)externalTags;
@end

