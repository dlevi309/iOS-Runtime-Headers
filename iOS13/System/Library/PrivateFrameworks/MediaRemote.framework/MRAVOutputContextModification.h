/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSArray, NSString;

@interface MRAVOutputContextModification : NSObject {

	unsigned long long _modificationType;
	NSArray* _concreteOutputDevices;
	NSArray* _outputDevices;
	NSArray* _avOutputDevices;
	NSString* _password;
	NSString* _initiator;

}

@property (nonatomic,readonly) unsigned long long modificationType;              //@synthesize modificationType=_modificationType - In the implementation block
@property (nonatomic,readonly) NSArray * concreteOutputDevices;                  //@synthesize concreteOutputDevices=_concreteOutputDevices - In the implementation block
@property (nonatomic,readonly) NSArray * outputDevices;                          //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) NSArray * avOutputDevices;                        //@synthesize avOutputDevices=_avOutputDevices - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * initiator;                                 //@synthesize initiator=_initiator - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)initiator;
-(NSArray *)outputDevices;
-(unsigned long long)modificationType;
-(void)setInitiator:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 devices:(id)arg2 ;
-(void)modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)trackModificationWithStartDate:(id)arg1 initialGroupSize:(unsigned long long)arg2 error:(id)arg3 ;
-(void)_modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performModificationWithOutputContext:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)errorFromResult:(id)arg1 ;
-(NSArray *)concreteOutputDevices;
-(NSArray *)avOutputDevices;
@end

