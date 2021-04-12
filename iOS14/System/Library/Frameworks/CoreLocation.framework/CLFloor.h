/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLFloor : NSObject <NSCopying, NSSecureCoding> {

	long long level;

}

@property (nonatomic,readonly) long long level; 
+(BOOL)supportsSecureCoding;
-(id)initWithLevel:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)level;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

