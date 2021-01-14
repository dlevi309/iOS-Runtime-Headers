/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASVTokenData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * endTimeMillis; 
@property (assign,nonatomic) float score; 
@property (nonatomic,copy) NSNumber * startTimeMillis; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenData;
+(id)tokenDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(float)score;
-(NSNumber *)endTimeMillis;
-(void)setEndTimeMillis:(NSNumber *)arg1 ;
-(NSNumber *)startTimeMillis;
-(void)setStartTimeMillis:(NSNumber *)arg1 ;
-(void)setScore:(float)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end

