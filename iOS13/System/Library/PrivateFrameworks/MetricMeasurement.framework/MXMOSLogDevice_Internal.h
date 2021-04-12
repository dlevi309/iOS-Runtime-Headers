/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <libobjc.A.dylib/MXMProbeableDevice.h>

@class NSString, OSLogDevice;

@interface MXMOSLogDevice_Internal : NSObject <MXMProbeableDevice> {

	NSString* _name;
	NSString* _identifier;
	OSLogDevice* _rawDevice;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) OSLogDevice * rawDevice;               //@synthesize rawDevice=_rawDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 ;
-(id)initWithOSLogDevice:(id)arg1 ;
-(OSLogDevice *)rawDevice;
-(void)setRawDevice:(OSLogDevice *)arg1 ;
@end

