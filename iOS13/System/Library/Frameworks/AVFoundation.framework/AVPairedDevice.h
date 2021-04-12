/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject {

	AVPairedDeviceInternal* _ivars;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * pairedDeviceID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSString * productName; 
+(id)pairedDevicesConnectedToOutputDevice:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(BOOL)isPlaying;
-(NSString *)productName;
-(id)ID;
-(NSString *)modelID;
-(NSString *)pairedDeviceID;
-(id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(BOOL)arg4 productName:(id)arg5 ;
@end

