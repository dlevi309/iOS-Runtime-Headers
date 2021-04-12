/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _cellId;
	NSNumber* _baseId;

}

@property (nonatomic,readonly) NSNumber * cellId;              //@synthesize cellId=_cellId - In the implementation block
@property (nonatomic,readonly) NSNumber * baseId;              //@synthesize baseId=_baseId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cellIdInfoFromCellId:(int)arg1 baseId:(int)arg2 ;
-(NSNumber *)cellId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)baseId;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

