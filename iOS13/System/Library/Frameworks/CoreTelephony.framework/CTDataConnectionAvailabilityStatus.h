/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)available;
-(int)csiError;
-(void)setCsiError:(int)arg1 ;
@end

