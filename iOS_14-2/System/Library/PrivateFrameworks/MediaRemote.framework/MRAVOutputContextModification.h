/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(unsigned long long)arg1 devices:(id)arg2 ;
-(void)modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setInitiator:(NSString *)arg1 ;
-(NSArray *)concreteOutputDevices;
-(NSArray *)avOutputDevices;
-(unsigned long long)modificationType;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)initiator;
-(NSArray *)outputDevices;
@end

