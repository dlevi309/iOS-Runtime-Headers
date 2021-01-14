/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class NSString;


@protocol HMMediaDestination <NSObject>
@property (copy,readonly) NSString * audioDestinationIdentifier; 
@property (copy,readonly) NSString * audioDestinationName; 
@property (readonly) long long audioDestinationType; 
@property (readonly) BOOL supportsAudioDestination; 
@property (readonly) BOOL supportsAudioGroup; 
@required
-(BOOL)supportsAudioDestination;
-(NSString *)audioDestinationIdentifier;
-(NSString *)audioDestinationName;
-(long long)audioDestinationType;
-(BOOL)supportsAudioGroup;

@end

