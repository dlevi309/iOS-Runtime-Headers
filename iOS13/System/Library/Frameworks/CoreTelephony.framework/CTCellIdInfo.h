/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)cellId;
-(NSNumber *)baseId;
@end

