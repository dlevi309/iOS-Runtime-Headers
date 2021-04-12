/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	BOOL isCompact;
	long long layerCount;
	long long dataCodewordCount;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) BOOL isCompact; 
@property (readonly) long long layerCount; 
@property (readonly) long long dataCodewordCount; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)errorCorrectedPayload;
-(id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4 ;
-(BOOL)isCompact;
-(long long)layerCount;
-(long long)dataCodewordCount;
@end

