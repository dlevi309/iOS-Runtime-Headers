/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CTDataUsage *)proxied;
-(void)addUsage:(id)arg1 ;
-(void)addNativeUsage:(id)arg1 ;
-(void)addProxiedUsage:(id)arg1 ;
-(id)initWithUsage:(id)arg1 proxied:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CTDataUsage *)native;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

