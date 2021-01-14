/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection;

@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	id _value;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) id value;                                         //@synthesize value=_value - In the implementation block
-(UITraitCollection *)traitCollection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTraitCollection:(id)arg1 value:(id)arg2 ;
-(id)value;
@end

