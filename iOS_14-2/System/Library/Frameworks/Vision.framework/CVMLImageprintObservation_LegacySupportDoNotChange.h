/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/CVMLObservation_LegacySupportDoNotChange.h>

@class NSUUID, MPImageDescriptor_LegacySupportDoNotChange, NSString;

@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange {

	NSUUID* _identifier;
	MPImageDescriptor_LegacySupportDoNotChange* _imageprintDescriptor;
	NSString* _imageprintType;
	NSString* _imageprintVersion;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)serializeAsVNImageprintStateAndReturnError:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
@end

