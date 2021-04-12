/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
*/


#import <MattingV2/MattingV2-Structs.h>
@class NSDictionary, NSString;

@interface MattingV2TuningParameters : NSObject {

	NSDictionary* _tuningDictionaryForPortType;
	NSString* _portType;

}

@property (nonatomic,retain) NSString * portType;              //@synthesize portType=_portType - In the implementation block
-(NSString *)portType;
-(id)initWithDefaults;
-(void)setPortType:(NSString *)arg1 ;
-(id)initWithTuningDictionary:(id)arg1 ;
-(id)getSemanticConfigurationsFor:(id)arg1 mattingConfiguration:(SCD_Struct_Fi5)arg2 ;
-(id)parseSemanticConfiguration:(id)arg1 semanticKey:(id)arg2 mattingConfiguration:(SCD_Struct_Fi5)arg3 ;
@end

