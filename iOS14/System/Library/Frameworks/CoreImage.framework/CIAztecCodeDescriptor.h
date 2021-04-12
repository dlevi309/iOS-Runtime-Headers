/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isCompact;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(NSData *)errorCorrectedPayload;
-(long long)dataCodewordCount;
-(long long)layerCount;
-(id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

