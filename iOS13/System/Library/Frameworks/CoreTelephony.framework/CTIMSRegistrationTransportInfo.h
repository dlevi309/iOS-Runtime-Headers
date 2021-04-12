/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRegistered;
	int _contextType;
	int _transportType;

}

@property (assign,nonatomic) BOOL isRegistered;              //@synthesize isRegistered=_isRegistered - In the implementation block
@property (assign,nonatomic) int contextType;                //@synthesize contextType=_contextType - In the implementation block
@property (assign,nonatomic) int transportType;              //@synthesize transportType=_transportType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRegistered;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)transportType;
-(int)contextType;
-(void)setContextType:(int)arg1 ;
-(void)setIsRegistered:(BOOL)arg1 ;
-(void)setTransportType:(int)arg1 ;
@end

