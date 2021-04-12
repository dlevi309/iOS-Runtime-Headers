/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AAUIDataclassOption : NSObject <NSCoding, NSSecureCoding> {

	BOOL _editable;
	BOOL _enabled;

}

@property (assign,getter=isEditable,nonatomic) BOOL editable;              //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithActions:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)isEditable;
@end

