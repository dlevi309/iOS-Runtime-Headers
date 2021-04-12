/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/


@interface NetworkInterfaceUtils : NSObject {

	BOOL _hasPrimaryInterface;

}

@property (nonatomic,readonly) BOOL hasPrimaryInterface;              //@synthesize hasPrimaryInterface=_hasPrimaryInterface - In the implementation block
+(id)sharedInstance;
-(BOOL)hasPrimaryInterface;
@end

