/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKeyboardInputMode.h>

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(id)displayName;
-(id)containingBundle;
-(id)identifierWithLayouts;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(BOOL)isExtensionInputMode;
-(id)hardwareLayout;
-(void)setPrimaryLanguage:(id)arg1 ;
-(BOOL)defaultLayoutIsASCIICapable;
-(BOOL)isStalledExtensionInputMode;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(id)extendedDisplayName;
-(id)normalizedIdentifierLevels;
-(BOOL)isDefaultRightToLeft;
-(id)containingBundleDisplayName;
-(BOOL)isDesiredForTraits:(id)arg1 ;
@end

