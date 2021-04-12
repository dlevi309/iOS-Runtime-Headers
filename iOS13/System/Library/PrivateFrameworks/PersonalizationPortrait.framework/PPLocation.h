/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemark, PPLocationRecord;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _category;
	CLPlacemark* _placemark;
	PPLocationRecord* _mostRelevantRecord;

}

@property (nonatomic,readonly) CLPlacemark * placemark;                            //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) unsigned short category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) PPLocationRecord * mostRelevantRecord;              //@synthesize mostRelevantRecord=_mostRelevantRecord - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describeCategory:(unsigned short)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)category;
-(CLPlacemark *)placemark;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(PPLocationRecord *)mostRelevantRecord;
-(id)customizedDescription;
-(id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3 ;
@end

