/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IKFourTuple : NSObject <NSCopying> {

	NSString* _namedStyle;
	long long _specifiedValueCount;
	double _values[4];

}

@property (nonatomic,readonly) NSString * namedStyle;                       //@synthesize namedStyle=_namedStyle - In the implementation block
@property (nonatomic,readonly) IKCornerRadii cornerRadiiValue; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsetsValue; 
-(UIEdgeInsets)edgeInsetsValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKCornerRadii)cornerRadiiValue;
-(NSString *)namedStyle;
-(id)initWithStyleString:(id)arg1 ;
-(id)initWithCornerRadii:(IKCornerRadii)arg1 ;
@end

