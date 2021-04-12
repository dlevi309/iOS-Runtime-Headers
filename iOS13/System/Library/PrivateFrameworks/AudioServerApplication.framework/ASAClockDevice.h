/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isRunning;
-(BOOL)isHidden;
-(unsigned)transportType;
-(NSString *)manufacturer;
-(NSArray *)controls;
-(unsigned)inputLatency;
-(unsigned)outputLatency;
-(NSString *)deviceUID;
-(BOOL)isAlive;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)clockDomain;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(double)nominalSampleRate;
-(NSArray *)nominalSampleRates;
-(unsigned)zeroTimestampPeriod;
-(void)setNominalSampleRate:(double)arg1 ;
@end

