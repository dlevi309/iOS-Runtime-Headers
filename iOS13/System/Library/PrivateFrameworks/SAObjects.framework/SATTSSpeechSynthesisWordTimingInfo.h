/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(float)timestamp;
-(id)groupIdentifier;
-(void)setTimestamp:(float)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(NSString *)word;
-(id)encodedClassName;
-(NSNumber *)sampleIndex;
-(void)setSampleIndex:(NSNumber *)arg1 ;
-(void)setWord:(NSString *)arg1 ;
@end

