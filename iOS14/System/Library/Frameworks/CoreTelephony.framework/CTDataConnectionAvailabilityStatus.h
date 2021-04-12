/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _available;
	int _csiError;

}

@property (assign,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) int csiError;                //@synthesize csiError=_csiError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)available;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setCsiError:(int)arg1 ;
-(int)csiError;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

