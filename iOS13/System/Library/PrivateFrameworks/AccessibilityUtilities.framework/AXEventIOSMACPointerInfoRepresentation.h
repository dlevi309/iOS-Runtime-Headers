/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)pressed;
-(long long)buttonIndex;
-(void)setButtonIndex:(long long)arg1 ;
@end

