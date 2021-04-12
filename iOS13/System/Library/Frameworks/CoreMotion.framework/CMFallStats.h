/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CMFallStats : NSObject <SRSampling, SRSampleExporting, NSSecureCoding> {

	NSData* _data;
	BOOL _isNearFall;
	int _fallType;
	double _iOStime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double iOStime;                      //@synthesize iOStime=_iOStime - In the implementation block
@property (nonatomic,readonly) int fallType;                        //@synthesize fallType=_fallType - In the implementation block
@property (nonatomic,readonly) BOOL isNearFall;                     //@synthesize isNearFall=_isNearFall - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(void)_decodeMeta;
-(id)initWithBufferAndLength:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)itemsIterator;
-(double)iOStime;
-(int)fallType;
-(BOOL)isNearFall;
-(id)sr_exportRepresentationEnumerator;
@end

