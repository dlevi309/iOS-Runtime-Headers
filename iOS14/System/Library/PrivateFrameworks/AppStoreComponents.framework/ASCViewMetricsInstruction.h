/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASCMetricsData, NSSet;

@interface ASCViewMetricsInstruction : NSObject <NSCopying, NSSecureCoding> {

	ASCMetricsData* _data;
	NSSet* _invocationPoints;

}

@property (nonatomic,copy,readonly) ASCMetricsData * data;                 //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSSet * invocationPoints;              //@synthesize invocationPoints=_invocationPoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(ASCMetricsData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)invocationPoints;
-(id)initWithData:(id)arg1 invocationPoints:(id)arg2 ;
@end

