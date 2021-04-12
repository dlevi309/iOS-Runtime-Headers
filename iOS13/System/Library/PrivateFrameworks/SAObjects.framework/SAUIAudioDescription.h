/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)reserved;
-(id)groupIdentifier;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setReserved:(NSNumber *)arg1 ;
-(void)setSampleRate:(NSNumber *)arg1 ;
-(NSNumber *)sampleRate;
-(NSNumber *)formatID;
-(id)encodedClassName;
-(void)setFormatID:(NSNumber *)arg1 ;
-(NSNumber *)bitsPerChannel;
-(void)setBitsPerChannel:(NSNumber *)arg1 ;
-(NSNumber *)bytesPerFrame;
-(void)setBytesPerFrame:(NSNumber *)arg1 ;
-(NSNumber *)bytesPerPacket;
-(void)setBytesPerPacket:(NSNumber *)arg1 ;
-(NSNumber *)channelsPerFrame;
-(void)setChannelsPerFrame:(NSNumber *)arg1 ;
-(NSNumber *)formatFlags;
-(void)setFormatFlags:(NSNumber *)arg1 ;
-(NSNumber *)framesPerPacket;
-(void)setFramesPerPacket:(NSNumber *)arg1 ;
@end

