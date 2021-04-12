/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet;

@interface VNPersonsModelReadOptions : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _acceptableVersions;

}

@property (nonatomic,copy) NSIndexSet * acceptableVersions;              //@synthesize acceptableVersions=_acceptableVersions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAcceptableVersions:(NSIndexSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSIndexSet *)acceptableVersions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

