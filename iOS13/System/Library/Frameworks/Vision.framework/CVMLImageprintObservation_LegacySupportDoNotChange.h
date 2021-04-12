/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
-(id)serializeAsVNImageprintStateAndReturnError:(id*)arg1 ;
@end

