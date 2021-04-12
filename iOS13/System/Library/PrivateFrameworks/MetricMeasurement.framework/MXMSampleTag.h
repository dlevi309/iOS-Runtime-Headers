/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, NSString;

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying> {

	NSOrderedSet* _taxonomy;
	MXMSampleTag* _parent;

}

@property (nonatomic,copy,readonly) NSString * domainNameString; 
@property (nonatomic,copy,readonly) MXMSampleTag * parent;                    //@synthesize parent=_parent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ancestery;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(MXMSampleTag *)parent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)initWithComponents:(id)arg1 ;
-(BOOL)isEqualToTag:(id)arg1 ;
-(BOOL)containsTag:(id)arg1 ;
-(id)initWithDNString:(id)arg1 ;
-(NSString *)domainNameString;
-(id)initWithTaxonomy:(id)arg1 ;
@end

