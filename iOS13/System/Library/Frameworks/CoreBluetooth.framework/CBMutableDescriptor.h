/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBDescriptor.h>

@class NSNumber;

@interface CBMutableDescriptor : CBDescriptor {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;              //@synthesize ID=_ID - In the implementation block
-(id)description;
-(id)initWithType:(id)arg1 value:(id)arg2 ;
-(NSNumber *)ID;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(void)setID:(NSNumber *)arg1 ;
@end

