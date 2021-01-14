/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)modelID;
-(BOOL)supportsHAP;
-(unsigned)deviceSubtype;
-(void*)outputDevice;
-(NSString *)uniqueIdentifier;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithOutputDevice:(void*)arg1 ;
-(void)setOutputDevice:(void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(AVOutputDevice *)av_OutputDevice;
-(BOOL)supportsWHA;
-(BOOL)shouldCreateAppleMediaAccessory;
@end

