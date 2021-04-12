/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	BOOL isCompact;
	long long rowCount;
	long long columnCount;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) BOOL isCompact; 
@property (readonly) long long rowCount; 
@property (readonly) long long columnCount; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4 ;
-(BOOL)isCompact;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(NSData *)errorCorrectedPayload;
-(id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4 ;
-(long long)columnCount;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)rowCount;
@end

