/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@interface CADisplayAttributes : NSObject {

	EDIDAttributes _edid_attributes;

}

@property (readonly) long long dolbyVision; 
@property (readonly) long long pqEOTF; 
@property (readonly) long long hdrStaticMetadataType1; 
@property (readonly) long long bt2020YCC; 
@property (readonly) BOOL legacyHDMIEDID; 
@property (readonly) unsigned manufacturerID; 
@property (readonly) unsigned productID; 
@property (readonly) unsigned weekOfManufacture; 
@property (readonly) unsigned yearOfManufacture; 
@property (readonly) unsigned serialNumber; 
-(unsigned)serialNumber;
-(long long)pqEOTF;
-(long long)dolbyVision;
-(unsigned)productID;
-(id)_initWithAttributes:(EDIDAttributes)arg1 ;
-(long long)hdrStaticMetadataType1;
-(BOOL)legacyHDMIEDID;
-(unsigned)manufacturerID;
-(unsigned)weekOfManufacture;
-(unsigned)yearOfManufacture;
-(long long)bt2020YCC;
@end

