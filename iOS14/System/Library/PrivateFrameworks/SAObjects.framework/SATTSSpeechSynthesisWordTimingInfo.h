/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SATTSSpeechSynthesisWordTimingInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long length; 
@property (assign,nonatomic) long long offset; 
@property (nonatomic,copy) NSNumber * sampleIndex; 
@property (assign,nonatomic) float timestamp; 
@property (nonatomic,copy) NSString * word; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechSynthesisWordTimingInfo;
+(id)speechSynthesisWordTimingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLength:(long long)arg1 ;
-(NSString *)word;
-(id)groupIdentifier;
-(id)encodedClassName;
-(float)timestamp;
-(long long)length;
-(NSNumber *)sampleIndex;
-(void)setSampleIndex:(NSNumber *)arg1 ;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(void)setWord:(NSString *)arg1 ;
-(void)setTimestamp:(float)arg1 ;
@end

