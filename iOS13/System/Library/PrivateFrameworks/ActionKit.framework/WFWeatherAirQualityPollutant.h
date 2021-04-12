/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMeasurement;

@interface WFWeatherAirQualityPollutant : NSObject <WFNaming, NSSecureCoding, NSCopying> {

	NSString* _localizedName;
	NSString* _localizedDescription;
	NSMeasurement* _concentration;

}

@property (nonatomic,copy,readonly) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy,readonly) NSMeasurement * concentration;                //@synthesize concentration=_concentration - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(NSMeasurement *)concentration;
-(NSString *)wfName;
-(id)initWithAirPollutant:(id)arg1 ;
@end

