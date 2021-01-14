/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@interface ENScanInstance : NSObject <CUXPCCodable> {

	unsigned char _minimumAttenuation;
	unsigned char _typicalAttenuation;
	long long _secondsSinceLastScan;

}

@property (assign,nonatomic) unsigned char minimumAttenuation;              //@synthesize minimumAttenuation=_minimumAttenuation - In the implementation block
@property (assign,nonatomic) unsigned char typicalAttenuation;              //@synthesize typicalAttenuation=_typicalAttenuation - In the implementation block
@property (assign,nonatomic) long long secondsSinceLastScan;                //@synthesize secondsSinceLastScan=_secondsSinceLastScan - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)description;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(unsigned char)minimumAttenuation;
-(void)setMinimumAttenuation:(unsigned char)arg1 ;
-(unsigned char)typicalAttenuation;
-(void)setTypicalAttenuation:(unsigned char)arg1 ;
-(long long)secondsSinceLastScan;
-(void)setSecondsSinceLastScan:(long long)arg1 ;
@end

