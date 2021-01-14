/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying> {

	long long _rowid;

}

@property (assign,setter=_setRowid:,getter=_rowid,nonatomic) long long rowid;              //@synthesize rowid=_rowid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)anchorFromValue:(unsigned long long)arg1 ;
+(id)latestAnchor;
+(id)_anchorWithRowidValue:(long long)arg1 ;
+(id)_anchorWithRowid:(long long)arg1 ;
-(long long)compare:(id)arg1 ;
-(long long)_rowid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)_setRowid:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

