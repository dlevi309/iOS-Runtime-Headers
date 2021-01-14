/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface AKRemoteDevice : NSObject <NSSecureCoding> {

	BOOL _trusted;
	BOOL _inCircle;
	NSString* _name;
	NSString* _serialNumber;
	NSString* _buildNumber;
	NSString* _operatingSystemName;
	NSString* _operatingSystemVersion;
	NSString* _model;
	NSString* _colorCode;
	NSString* _enclosureColorCode;
	NSString* _coverGlassColorCode;
	NSString* _housingColorCode;
	NSString* _backingColorCode;
	NSDate* _lastUpdatedDate;
	NSString* _machineId;
	NSDictionary* _additionalInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildNumber;                         //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * operatingSystemName;                 //@synthesize operatingSystemName=_operatingSystemName - In the implementation block
@property (nonatomic,copy,readonly) NSString * operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * colorCode;                           //@synthesize colorCode=_colorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * enclosureColorCode;                  //@synthesize enclosureColorCode=_enclosureColorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverGlassColorCode;                 //@synthesize coverGlassColorCode=_coverGlassColorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * housingColorCode;                    //@synthesize housingColorCode=_housingColorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * backingColorCode;                    //@synthesize backingColorCode=_backingColorCode - In the implementation block
@property (nonatomic,readonly) BOOL trusted;                                        //@synthesize trusted=_trusted - In the implementation block
@property (nonatomic,readonly) BOOL inCircle;                                       //@synthesize inCircle=_inCircle - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastUpdatedDate;                       //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * machineId;                           //@synthesize machineId=_machineId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo;                  //@synthesize additionalInfo=_additionalInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)serialNumber;
-(NSString *)model;
-(NSString *)operatingSystemVersion;
-(NSDate *)lastUpdatedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)buildNumber;
-(BOOL)trusted;
-(NSString *)name;
-(id)description;
-(NSString *)colorCode;
-(NSString *)machineId;
-(NSDictionary *)additionalInfo;
-(BOOL)inCircle;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)enclosureColorCode;
-(NSString *)coverGlassColorCode;
-(NSString *)housingColorCode;
-(NSString *)backingColorCode;
-(id)initWithInfo:(id)arg1 ;
-(void)_initWithInfo:(id)arg1 ;
-(NSString *)operatingSystemName;
@end

