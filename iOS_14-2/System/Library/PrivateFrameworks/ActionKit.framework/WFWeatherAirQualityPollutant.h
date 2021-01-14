/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMeasurement *)concentration;
-(NSString *)wfName;
-(NSString *)localizedDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAirPollutant:(id)arg1 ;
@end

