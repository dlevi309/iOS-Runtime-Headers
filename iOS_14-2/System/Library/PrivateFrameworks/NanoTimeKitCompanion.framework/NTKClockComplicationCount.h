/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString;

@interface NTKClockComplicationCount : NSObject {

	NSString* _applicationIdentifier;
	long long _countOnFace;

}

@property (nonatomic,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) long long countOnFace;                         //@synthesize countOnFace=_countOnFace - In the implementation block
-(NSString *)applicationIdentifier;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithApplicationIdentifier:(id)arg1 countOnFace:(long long)arg2 ;
-(long long)countOnFace;
@end

