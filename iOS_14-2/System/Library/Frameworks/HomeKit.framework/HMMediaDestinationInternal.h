/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class NSArray, NSString;


@protocol HMMediaDestinationInternal <HMMediaDestination>
@property (copy,readonly) NSArray * audioDestinationMediaProfiles; 
@property (copy,readonly) NSString * audioDestinationParentIdentifier; 
@required
-(void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(NSArray *)audioDestinationMediaProfiles;
-(NSString *)audioDestinationParentIdentifier;

@end

