/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKOutputDevice.h>

@class NSString, AVOutputDevice, AVOutputContext;

@interface CRKConcreteOutputDevice : NSObject <CRKOutputDevice> {

	AVOutputDevice* _outputDevice;
	AVOutputContext* _outputContext;

}

@property (nonatomic,readonly) AVOutputDevice * outputDevice;                //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) AVOutputContext * outputContext;              //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
+(id)outputOptionsWithPassword:(id)arg1 suppressPrompt:(BOOL)arg2 ;
-(AVOutputDevice *)outputDevice;
-(AVOutputContext *)outputContext;
-(NSString *)identifier;
-(void)displayToDeviceWithPassword:(id)arg1 suppressPrompt:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithOutputDevice:(id)arg1 outputContext:(id)arg2 ;
@end

