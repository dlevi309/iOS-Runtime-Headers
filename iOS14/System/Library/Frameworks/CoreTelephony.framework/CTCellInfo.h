/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTCellInfo : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _legacyInfo;

}

@property (nonatomic,retain) NSArray * legacyInfo;              //@synthesize legacyInfo=_legacyInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)legacyInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLegacyInfo:(NSArray *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

