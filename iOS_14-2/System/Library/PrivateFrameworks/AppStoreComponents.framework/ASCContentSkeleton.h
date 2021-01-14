/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCContentSkeleton : NSObject <NSCopying> {

	long long _type;
	double _rawValue;

}

@property (nonatomic,readonly) long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double rawValue;              //@synthesize rawValue=_rawValue - In the implementation block
+(id)absoluteSkeleton:(double)arg1 ;
+(id)fractionalSkeleton:(double)arg1 ;
-(double)rawValue;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)widthThatFits:(CGSize)arg1 ;
-(id)initWithType:(long long)arg1 rawValue:(double)arg2 ;
@end

