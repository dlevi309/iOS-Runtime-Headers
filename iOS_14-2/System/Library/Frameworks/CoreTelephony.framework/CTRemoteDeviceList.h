/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface CTRemoteDeviceList : NSObject <NSSecureCoding> {

	NSMutableArray* _devices;

}

@property (nonatomic,retain) NSMutableArray * devices;              //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableArray *)devices;
-(void)setDevices:(NSMutableArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

