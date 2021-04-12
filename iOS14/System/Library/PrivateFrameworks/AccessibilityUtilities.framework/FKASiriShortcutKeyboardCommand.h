/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)perform;
-(AXSiriShortcut *)shortcut;
-(id)description;
-(void)setShortcut:(AXSiriShortcut *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSiriShortcutIdentifier:(id)arg1 ;
-(NSString *)siriShortcutIdentifier;
-(BOOL)isEqualToCommand:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

