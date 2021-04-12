/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXSiriShortcut : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _shortcutName;
	NSString* _phrase;
	NSString* _associatedAppBundleIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * shortcutName;                               //@synthesize shortcutName=_shortcutName - In the implementation block
@property (nonatomic,copy) NSString * phrase;                                     //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)shortcutName;
-(NSString *)associatedAppBundleIdentifier;
-(void)setShortcutName:(NSString *)arg1 ;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
@end

