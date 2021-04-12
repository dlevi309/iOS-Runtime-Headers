/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(NSString *)manufacturer;
-(BOOL)hasAudio;
-(NSString *)modelName;
-(unsigned)transportType;
-(BOOL)isAcquired;
-(NSString *)name;
-(NSString *)boxUID;
-(BOOL)isProtected;
-(void)setName:(NSString *)arg1 ;
-(BOOL)identify;
-(BOOL)hasMIDI;
-(BOOL)hasVideo;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(NSString *)modelUID;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(NSArray *)deviceObjectIDs;
-(NSArray *)audioDevices;
-(NSArray *)clockDevices;
-(BOOL)isAcquireSettable;
-(BOOL)isIdentifySettable;
-(BOOL)isNameSettable;
-(int)acquisitionFailure;
-(void)setAcquired:(BOOL)arg1 ;
-(void)setIdentify:(BOOL)arg1 ;
@end
