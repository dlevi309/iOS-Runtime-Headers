/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXEventIOSMACPointerInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _pressed;
	long long _buttonIndex;
	CGPoint _location;

}

@property (assign,nonatomic) BOOL pressed;                       //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) long long buttonIndex;              //@synthesize buttonIndex=_buttonIndex - In the implementation block
@property (assign,nonatomic) CGPoint location;                   //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)pressed;
-(void)setPressed:(BOOL)arg1 ;
-(CGPoint)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(long long)buttonIndex;
-(void)setButtonIndex:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

