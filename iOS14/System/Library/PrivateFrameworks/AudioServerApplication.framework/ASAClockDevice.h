/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSArray;

@interface ASAClockDevice : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * deviceUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) unsigned clockDomain; 
@property (getter=isAlive,nonatomic,readonly) BOOL alive; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) double nominalSampleRate; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned inputLatency; 
@property (nonatomic,readonly) unsigned outputLatency; 
@property (nonatomic,readonly) unsigned zeroTimestampPeriod; 
@property (nonatomic,copy,readonly) NSArray * nominalSampleRates; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * controls; 
-(NSString *)deviceUID;
-(NSString *)manufacturer;
-(BOOL)isHidden;
-(NSArray *)controls;
-(unsigned)transportType;
-(NSString *)name;
-(BOOL)isAlive;
-(unsigned)inputLatency;
-(unsigned)outputLatency;
-(BOOL)isRunning;
-(void)setName:(NSString *)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(unsigned)clockDomain;
-(double)nominalSampleRate;
-(NSArray *)nominalSampleRates;
-(unsigned)zeroTimestampPeriod;
-(void)setNominalSampleRate:(double)arg1 ;
@end

