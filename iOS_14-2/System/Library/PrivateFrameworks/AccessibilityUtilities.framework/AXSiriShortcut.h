/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXSiriShortcut : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _shortcutName;
	NSString* _associatedAppBundleIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * shortcutName;                               //@synthesize shortcutName=_shortcutName - In the implementation block
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * phrase; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShortcutName:(NSString *)arg1 ;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSString *)phrase;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithAccessibilityWorkflow:(id)arg1 ;
-(NSString *)shortcutName;
-(NSString *)associatedAppBundleIdentifier;
@end

