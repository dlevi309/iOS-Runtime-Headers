/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKeyboardInputMode.h>

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(id)containingBundle;
-(void)setPrimaryLanguage:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(id)hardwareLayout;
-(BOOL)defaultLayoutIsASCIICapable;
-(BOOL)isStalledExtensionInputMode;
-(id)extendedDisplayName;
-(id)normalizedIdentifierLevels;
-(BOOL)isDefaultRightToLeft;
-(id)containingBundleDisplayName;
-(BOOL)isDesiredForTraits:(id)arg1 ;
-(id)identifierWithLayouts;
-(NSExtension *)extension;
-(BOOL)isExtensionInputMode;
-(id)initWithIdentifier:(id)arg1 ;
-(id)displayName;
-(void)dealloc;
@end

