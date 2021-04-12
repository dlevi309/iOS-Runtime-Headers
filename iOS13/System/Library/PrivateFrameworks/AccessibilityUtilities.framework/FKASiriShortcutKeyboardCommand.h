/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilitySharedSupport/AXSSKeyboardCommand.h>

@class NSString, AXSiriShortcut;

@interface FKASiriShortcutKeyboardCommand : AXSSKeyboardCommand {

	NSString* _siriShortcutIdentifier;
	AXSiriShortcut* _shortcut;

}

@property (nonatomic,retain) AXSiriShortcut * shortcut;                        //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,readonly) NSString * siriShortcutIdentifier;              //@synthesize siriShortcutIdentifier=_siriShortcutIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)commandWithSiriShortcutIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedName;
-(void)perform;
-(id)initWithSiriShortcutIdentifier:(id)arg1 ;
-(NSString *)siriShortcutIdentifier;
-(AXSiriShortcut *)shortcut;
-(BOOL)isEqualToCommand:(id)arg1 ;
-(void)setShortcut:(AXSiriShortcut *)arg1 ;
@end

