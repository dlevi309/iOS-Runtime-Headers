/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)x;
-(float)z;
-(void)setX:(float)arg1 ;
-(void)setY:(float)arg1 ;
-(float)y;
-(void)setZ:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(NSString *)description;
-(id)accessibilityEventRepresentationTabularDescription;
-(unsigned)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

