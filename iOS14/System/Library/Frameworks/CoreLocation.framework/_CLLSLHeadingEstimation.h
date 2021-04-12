/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _CLLSLHeadingEstimation : NSObject <NSCopying, NSSecureCoding> {

	int _status;
	NSArray* _headings;

}

@property (assign,nonatomic) int status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSArray * headings;              //@synthesize headings=_headings - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)headings;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)description;
-(void)setHeadings:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(void)dealloc;
@end

