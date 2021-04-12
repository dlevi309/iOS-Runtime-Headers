/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface VNPersonsModelInformation : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _version;
	NSDate* _lastModificationDate;

}

@property (nonatomic,readonly) unsigned long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModificationDate;              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastModificationDate;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVersion:(unsigned long long)arg1 lastModificationDate:(id)arg2 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

