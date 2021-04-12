/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CRKDeviceDisplay : NSObject <NSSecureCoding> {

	double _scaleFactor;
	unsigned long long _orientation;
	NSString* _frameString;
	CGRect _frame;

}

@property (nonatomic,readonly) NSString * frameString;                      //@synthesize frameString=_frameString - In the implementation block
@property (nonatomic,readonly) double scaleFactor;                          //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) unsigned long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)orientation;
-(CGRect)frame;
-(double)scaleFactor;
-(NSDictionary *)dictionaryValue;
-(id)initWithScaleFactor:(double)arg1 frame:(CGRect)arg2 orientation:(unsigned long long)arg3 ;
-(NSString *)frameString;
-(id)initWithScaleFactor:(double)arg1 width:(double)arg2 height:(double)arg3 orientation:(unsigned long long)arg4 ;
@end

