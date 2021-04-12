/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRRequestFetching.h>

@protocol SRRequestReading;
@class NSString;

@interface SRReaderFetchRequest : NSObject <SRRequestFetching> {

	id<SRRequestReading> _readerRequest;
	BOOL _bypassHoldingPeriod;
	double _from;
	double _to;

}

@property (nonatomic,retain) NSString * sensor; 
@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (nonatomic,retain) NSString * deviceIdentifier; 
@property (assign) double from;                                        //@synthesize from=_from - In the implementation block
@property (assign) double to;                                          //@synthesize to=_to - In the implementation block
@property (assign) BOOL bypassHoldingPeriod;                           //@synthesize bypassHoldingPeriod=_bypassHoldingPeriod - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)to;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(double)from;
-(id)init;
-(void)setTo:(double)arg1 ;
-(NSString *)sensor;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(void)setFrom:(double)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setSensor:(NSString *)arg1 ;
-(BOOL)bypassHoldingPeriod;
-(void)setBypassHoldingPeriod:(BOOL)arg1 ;
@end

