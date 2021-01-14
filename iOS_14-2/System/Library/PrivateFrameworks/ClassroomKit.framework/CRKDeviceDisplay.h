/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CRKDeviceDisplay : NSObject <NSSecureCoding> {

	double _scaleFactor;
	unsigned long long _orientation;
	CGRect _frame;

}

@property (nonatomic,readonly) double scaleFactor;                          //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) unsigned long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(double)scaleFactor;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)orientation;
-(NSDictionary *)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithScaleFactor:(double)arg1 frame:(CGRect)arg2 orientation:(unsigned long long)arg3 ;
-(id)initWithScaleFactor:(double)arg1 width:(double)arg2 height:(double)arg3 orientation:(unsigned long long)arg4 ;
@end

