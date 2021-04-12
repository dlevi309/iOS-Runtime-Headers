/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRUpdateOutputDevicesMessage : MRProtocolMessage {

	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * externalOutputDevices; 
@property (nonatomic,readonly) NSArray * outputDevices; 
-(id)initWithOutputDevices:(id)arg1 ;
-(NSArray *)outputDevices;
-(unsigned long long)type;
-(NSArray *)externalOutputDevices;
@end

