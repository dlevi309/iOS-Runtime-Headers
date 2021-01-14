/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	long long rowCount;
	long long columnCount;
	long long eccVersion;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) long long rowCount; 
@property (readonly) long long columnCount; 
@property (readonly) long long eccVersion; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)errorCorrectedPayload;
-(long long)eccVersion;
-(id)initWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
-(long long)columnCount;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)rowCount;
@end

