/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_initWithAttributes:(EDIDAttributes)arg1 ;
-(long long)dolbyVision;
-(long long)pqEOTF;
-(long long)hdrStaticMetadataType1;
-(long long)bt2020YCC;
-(BOOL)legacyHDMIEDID;
@end

