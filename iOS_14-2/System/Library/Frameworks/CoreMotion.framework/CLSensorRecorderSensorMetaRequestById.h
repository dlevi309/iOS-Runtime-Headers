/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorMetaRequestById : NSObject <NSSecureCoding> {

	int _dataType;
	unsigned long long _identifier;

}

@property (assign) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign) int dataType;                               //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(void)setDataType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
@end

