/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(int)dataType;
-(void)setDataType:(int)arg1 ;
@end

