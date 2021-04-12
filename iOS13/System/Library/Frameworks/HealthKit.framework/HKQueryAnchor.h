/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)latestAnchor;
+(id)anchorFromValue:(unsigned long long)arg1 ;
+(id)_anchorWithRowidValue:(long long)arg1 ;
+(id)_anchorWithRowid:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_rowid;
-(void)_setRowid:(long long)arg1 ;
@end

