/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isEditable;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithActions:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
@end

