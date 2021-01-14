/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUIAudioDescription : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * bitsPerChannel; 
@property (nonatomic,copy) NSNumber * bytesPerFrame; 
@property (nonatomic,copy) NSNumber * bytesPerPacket; 
@property (nonatomic,copy) NSNumber * channelsPerFrame; 
@property (nonatomic,copy) NSString * format; 
@property (nonatomic,copy) NSNumber * formatFlags; 
@property (nonatomic,copy) NSNumber * formatID; 
@property (nonatomic,copy) NSNumber * framesPerPacket; 
@property (nonatomic,copy) NSNumber * reserved; 
@property (nonatomic,copy) NSNumber * sampleRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioDescription;
+(id)audioDescriptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(id)groupIdentifier;
-(NSNumber *)formatID;
-(id)encodedClassName;
-(NSNumber *)reserved;
-(void)setReserved:(NSNumber *)arg1 ;
-(void)setSampleRate:(NSNumber *)arg1 ;
-(void)setFormatID:(NSNumber *)arg1 ;
-(NSNumber *)bitsPerChannel;
-(NSNumber *)bytesPerFrame;
-(void)setBitsPerChannel:(NSNumber *)arg1 ;
-(void)setBytesPerFrame:(NSNumber *)arg1 ;
-(NSNumber *)bytesPerPacket;
-(void)setBytesPerPacket:(NSNumber *)arg1 ;
-(NSNumber *)channelsPerFrame;
-(void)setChannelsPerFrame:(NSNumber *)arg1 ;
-(NSNumber *)formatFlags;
-(void)setFormatFlags:(NSNumber *)arg1 ;
-(NSNumber *)framesPerPacket;
-(void)setFramesPerPacket:(NSNumber *)arg1 ;
-(NSNumber *)sampleRate;
@end

