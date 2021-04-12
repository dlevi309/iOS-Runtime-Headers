/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_xpc_object;
@class CMSensorRecorderInternal, NSObject, CLSensorRecorderSensorMeta, NSMutableArray, NSArray;

@interface CMSensorDataList : NSObject <NSFastEnumeration> {

	CMSensorRecorderInternal* fProxy;
	NSObject*<OS_xpc_object> fDataBuffer;
	CLSensorRecorderSensorMeta* fCurrentBlock;
	unsigned long long fCurrentBlockIdentifier;
	long long fCurrentBlockDataIdentifier;
	double fCurrentBlockStartTime;
	unsigned long long fCurrentBlockTimestamp;
	char* fDataBufferPtr;
	unsigned long long fDataBufferLength;
	unsigned long long fCurrentIdentifier;
	unsigned long long fStartingIdentifier;
	long long fRetrievedDataBufferIdentifier;
	unsigned long long fBlockOffset;
	AccelUnpacker fAccelUnpacker;
	GyroUnpacker fGyroUnpacker;
	PressureUnpacker fPressureUnpacker;
	NSMutableArray* fCachedData;
	NSArray* fMetaArray;
	int fDataType;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_updateCurrentBlockProperties;
-(BOOL)_updatePointers;
-(id)initFrom:(double)arg1 to:(double)arg2 withType:(int)arg3 ;
-(id)initWithIdentifier:(unsigned long long)arg1 andType:(int)arg2 ;
-(void)dealloc;
@end

