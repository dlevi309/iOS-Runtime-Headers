/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventAccelerometerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	unsigned _type;
	float _x;
	float _y;
	float _z;

}

@property (assign,nonatomic) unsigned type;                         //@synthesize type=_type - In the implementation block
@property (assign,x,nonatomic) float x;                             //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;                             //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;                             //@synthesize z=_z - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)x;
-(float)y;
-(float)z;
-(void)setX:(float)arg1 ;
-(void)setY:(float)arg1 ;
-(void)setZ:(float)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
@end

