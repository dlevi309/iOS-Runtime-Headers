/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventGameControllerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	double _directionPadUp;
	double _directionPadDown;
	double _directionPadLeft;
	double _directionPadRight;
	double _faceButtonA;
	double _faceButtonB;
	double _faceButtonX;
	double _faceButtonY;
	double _shoulderButtonR1;
	double _shoulderButtonR2;
	double _shoulderButtonL1;
	double _shoulderButtonL2;
	double _leftJoystickX;
	double _leftJoystickY;
	double _rightJoystickX;
	double _rightJoystickY;

}

@property (assign,nonatomic) double directionPadUp;                   //@synthesize directionPadUp=_directionPadUp - In the implementation block
@property (assign,nonatomic) double directionPadDown;                 //@synthesize directionPadDown=_directionPadDown - In the implementation block
@property (assign,nonatomic) double directionPadLeft;                 //@synthesize directionPadLeft=_directionPadLeft - In the implementation block
@property (assign,nonatomic) double directionPadRight;                //@synthesize directionPadRight=_directionPadRight - In the implementation block
@property (assign,nonatomic) double faceButtonA;                      //@synthesize faceButtonA=_faceButtonA - In the implementation block
@property (assign,nonatomic) double faceButtonB;                      //@synthesize faceButtonB=_faceButtonB - In the implementation block
@property (assign,nonatomic) double faceButtonX;                      //@synthesize faceButtonX=_faceButtonX - In the implementation block
@property (assign,nonatomic) double faceButtonY;                      //@synthesize faceButtonY=_faceButtonY - In the implementation block
@property (assign,nonatomic) double shoulderButtonR1;                 //@synthesize shoulderButtonR1=_shoulderButtonR1 - In the implementation block
@property (assign,nonatomic) double shoulderButtonR2;                 //@synthesize shoulderButtonR2=_shoulderButtonR2 - In the implementation block
@property (assign,nonatomic) double shoulderButtonL1;                 //@synthesize shoulderButtonL1=_shoulderButtonL1 - In the implementation block
@property (assign,nonatomic) double shoulderButtonL2;                 //@synthesize shoulderButtonL2=_shoulderButtonL2 - In the implementation block
@property (assign,nonatomic) double leftJoystickX;                    //@synthesize leftJoystickX=_leftJoystickX - In the implementation block
@property (assign,nonatomic) double leftJoystickY;                    //@synthesize leftJoystickY=_leftJoystickY - In the implementation block
@property (assign,nonatomic) double rightJoystickX;                   //@synthesize rightJoystickX=_rightJoystickX - In the implementation block
@property (assign,nonatomic) double rightJoystickY;                   //@synthesize rightJoystickY=_rightJoystickY - In the implementation block
@property (nonatomic,readonly) BOOL rightJoystickActive; 
@property (nonatomic,readonly) BOOL leftJoystickActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setDirectionPadUp:(double)arg1 ;
-(void)setFaceButtonA:(double)arg1 ;
-(void)setDirectionPadDown:(double)arg1 ;
-(void)setDirectionPadLeft:(double)arg1 ;
-(void)setDirectionPadRight:(double)arg1 ;
-(void)setFaceButtonB:(double)arg1 ;
-(void)setFaceButtonX:(double)arg1 ;
-(void)setFaceButtonY:(double)arg1 ;
-(void)setShoulderButtonL1:(double)arg1 ;
-(void)setShoulderButtonL2:(double)arg1 ;
-(void)setShoulderButtonR1:(double)arg1 ;
-(void)setShoulderButtonR2:(double)arg1 ;
-(void)setLeftJoystickX:(double)arg1 ;
-(void)setLeftJoystickY:(double)arg1 ;
-(void)setRightJoystickX:(double)arg1 ;
-(void)setRightJoystickY:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)directionPadUp;
-(double)directionPadDown;
-(double)directionPadLeft;
-(double)directionPadRight;
-(double)faceButtonA;
-(double)faceButtonB;
-(double)faceButtonX;
-(double)faceButtonY;
-(double)shoulderButtonL1;
-(double)shoulderButtonL2;
-(double)shoulderButtonR1;
-(double)shoulderButtonR2;
-(double)leftJoystickX;
-(double)leftJoystickY;
-(double)rightJoystickX;
-(double)rightJoystickY;
-(BOOL)rightJoystickActive;
-(BOOL)leftJoystickActive;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
