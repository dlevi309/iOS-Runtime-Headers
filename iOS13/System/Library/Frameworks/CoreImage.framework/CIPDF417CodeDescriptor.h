/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)rowCount;
-(long long)columnCount;
-(NSData *)errorCorrectedPayload;
-(BOOL)isCompact;
-(id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4 ;
@end

