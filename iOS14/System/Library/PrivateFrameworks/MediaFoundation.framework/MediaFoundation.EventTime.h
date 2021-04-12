/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/

#import <MediaFoundation/MediaFoundation-Structs.h>
#import <libobjc.A.dylib/MFTimeStamp.h>

@interface MediaFoundation.EventTime : _UKNOWN_SUPERCLASS_ <MFTimeStamp> {

	 time;
	 userSecondsSinceReferenceDate;
	 hostTime;
	 type;

}

@property (readonly,nonatomic) double time; 
@property (readonly,nonatomic) double userSecondsSinceReferenceDate; 
@property (readonly,nonatomic) SCD_Struct_Me0 hostTime; 
-(double)time;
-(SCD_Struct_Me0)hostTime;
-(double)userSecondsSinceReferenceDate;
@end

