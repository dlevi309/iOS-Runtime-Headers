/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponentsFormatter, NSString;

@interface WFTimeInterval : NSObject <NSCopying, WFSerializableContent, NSSecureCoding> {

	NSDateComponentsFormatter* _timeIntervalFormatter;
	unsigned long long _hash;
	double _timeInterval;
	unsigned long long _allowedUnits;
	long long _unitsStyle;
	unsigned long long _zeroFormattingBehavior;

}

@property (nonatomic,readonly) NSDateComponentsFormatter * timeIntervalFormatter;              //@synthesize timeIntervalFormatter=_timeIntervalFormatter - In the implementation block
@property (nonatomic,readonly) double timeInterval;                                            //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedUnits;                                //@synthesize allowedUnits=_allowedUnits - In the implementation block
@property (nonatomic,readonly) long long unitsStyle;                                           //@synthesize unitsStyle=_unitsStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long zeroFormattingBehavior;                      //@synthesize zeroFormattingBehavior=_zeroFormattingBehavior - In the implementation block
@property (nonatomic,readonly) NSString * absoluteTimeString; 
@property (readonly) unsigned long long hash;                                                  //@synthesize hash=_hash - In the implementation block
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(long long)unitsStyle;
-(unsigned long long)allowedUnits;
-(unsigned long long)zeroFormattingBehavior;
-(id)initWithTimeInterval:(double)arg1 ;
-(id)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithTimeInterval:(double)arg1 allowedUnits:(unsigned long long)arg2 unitsStyle:(long long)arg3 zeroFormattingBehavior:(unsigned long long)arg4 ;
-(NSDateComponentsFormatter *)timeIntervalFormatter;
-(NSString *)absoluteTimeString;
@end

