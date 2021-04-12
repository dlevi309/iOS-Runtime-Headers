/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSArray;

@interface ASABox : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelName; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSString * boxUID; 
@property (nonatomic,copy,readonly) NSString * modelUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) BOOL hasAudio; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) BOOL hasMIDI; 
@property (nonatomic,readonly) BOOL isProtected; 
@property (assign,getter=isAcquired,nonatomic) BOOL acquired; 
@property (nonatomic,readonly) int acquisitionFailure; 
@property (assign,nonatomic) BOOL identify; 
@property (nonatomic,copy,readonly) NSArray * audioDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * deviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * clockDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * audioDevices; 
@property (nonatomic,copy,readonly) NSArray * clockDevices; 
@property (getter=isNameSettable,nonatomic,readonly) BOOL nameSettable; 
@property (getter=isAcquireSettable,nonatomic,readonly) BOOL acquireSettable; 
@property (getter=isIdentifySettable,nonatomic,readonly) BOOL identifySettable; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)transportType;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(BOOL)isAcquired;
-(NSString *)modelName;
-(NSString *)manufacturer;
-(BOOL)hasVideo;
-(BOOL)hasAudio;
-(BOOL)isProtected;
-(BOOL)identify;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(NSArray *)audioDevices;
-(NSString *)boxUID;
-(NSArray *)clockDevices;
-(NSString *)modelUID;
-(BOOL)hasMIDI;
-(int)acquisitionFailure;
-(void)setIdentify:(BOOL)arg1 ;
-(void)setAcquired:(BOOL)arg1 ;
-(id)coreAudioClassName;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(NSArray *)deviceObjectIDs;
-(BOOL)isAcquireSettable;
-(BOOL)isIdentifySettable;
-(BOOL)isNameSettable;
@end

