/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

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
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operatingSystemName;
-(NSString *)operatingSystemVersion;
-(NSString *)model;
-(NSString *)serialNumber;
-(id)initWithInfo:(id)arg1 ;
-(NSString *)colorCode;
-(NSDate *)lastUpdatedDate;
-(void)_initWithInfo:(id)arg1 ;
-(NSString *)buildNumber;
-(NSString *)enclosureColorCode;
-(NSString *)coverGlassColorCode;
-(NSString *)housingColorCode;
-(NSString *)backingColorCode;
-(BOOL)trusted;
-(BOOL)inCircle;
-(NSString *)machineId;
@end

