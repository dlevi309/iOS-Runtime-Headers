/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, AVOutputDevice;

@interface HMDMediaOutputDevice : HMFObject {

	void* _outputDevice;
	NSString* _uniqueIdentifier;
	NSString* _name;

}

@property (readonly) AVOutputDevice * av_OutputDevice; 
@property (assign,nonatomic) void* outputDevice;                         //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) unsigned deviceSubtype; 
@property (nonatomic,readonly) BOOL supportsWHA; 
@property (nonatomic,readonly) BOOL supportsHAP; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)uniqueIdentifier;
-(NSString *)modelID;
-(void*)outputDevice;
-(id)initWithOutputDevice:(void*)arg1 ;
-(unsigned)deviceSubtype;
-(BOOL)supportsHAP;
-(void)setOutputDevice:(void*)arg1 ;
-(AVOutputDevice *)av_OutputDevice;
-(BOOL)supportsWHA;
-(BOOL)shouldCreateAppleMediaAccessory;
@end

