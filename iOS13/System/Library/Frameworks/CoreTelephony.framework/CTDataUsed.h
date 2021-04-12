/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTDataUsage;

@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding> {

	CTDataUsage* _native;
	CTDataUsage* _proxied;

}

@property (nonatomic,readonly) CTDataUsage * native;               //@synthesize native=_native - In the implementation block
@property (nonatomic,readonly) CTDataUsage * proxied;              //@synthesize proxied=_proxied - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addUsage:(id)arg1 ;
-(CTDataUsage *)native;
-(CTDataUsage *)proxied;
-(void)addNativeUsage:(id)arg1 ;
-(void)addProxiedUsage:(id)arg1 ;
-(id)initWithUsage:(id)arg1 proxied:(id)arg2 ;
@end

