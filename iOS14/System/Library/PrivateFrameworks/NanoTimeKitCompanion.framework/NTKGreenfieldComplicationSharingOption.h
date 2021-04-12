/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString;

@interface NTKGreenfieldComplicationSharingOption : NSObject {

	NSString* _name;
	NSString* _uniqueIdentifier;
	unsigned long long _optionType;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long optionType;                 //@synthesize optionType=_optionType - In the implementation block
+(id)optionWithName:(id)arg1 uniqueIdentifier:(id)arg2 optionType:(unsigned long long)arg3 ;
-(NSString *)uniqueIdentifier;
-(NSString *)name;
-(unsigned long long)optionType;
@end

