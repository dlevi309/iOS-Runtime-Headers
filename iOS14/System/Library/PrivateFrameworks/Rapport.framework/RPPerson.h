/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, CURangingMeasurement, NSMutableDictionary;

@interface RPPerson : NSObject <NSSecureCoding> {

	int _activityLevel;
	unsigned _flags;
	int _proximity;
	NSString* _contactID;
	NSArray* _devices;
	NSString* _identifier;
	NSString* _name;
	CURangingMeasurement* _relativeLocation;
	NSMutableDictionary* _deviceDict;

}

@property (nonatomic,retain) NSMutableDictionary * deviceDict;              //@synthesize deviceDict=_deviceDict - In the implementation block
@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) CURangingMeasurement * relativeLocation;                 //@synthesize relativeLocation=_relativeLocation - In the implementation block
@property (nonatomic,readonly) int activityLevel;                           //@synthesize activityLevel=_activityLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactID;                   //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices;                      //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) unsigned flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int proximity;                               //@synthesize proximity=_proximity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)devices;
-(NSString *)contactID;
-(unsigned)flags;
-(CURangingMeasurement *)relativeLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(int)activityLevel;
-(void)setRelativeLocation:(CURangingMeasurement *)arg1 ;
-(int)proximity;
-(NSString *)name;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(unsigned)_updateDeviceDerivedInfo;
-(unsigned)removeRPDevice:(id)arg1 ;
-(unsigned)updateWithRPDevice:(id)arg1 ;
-(NSMutableDictionary *)deviceDict;
-(void)setDeviceDict:(NSMutableDictionary *)arg1 ;
@end

