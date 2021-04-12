/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)score;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setScore:(float)arg1 ;
-(id)encodedClassName;
-(NSNumber *)endTimeMillis;
-(void)setEndTimeMillis:(NSNumber *)arg1 ;
-(NSNumber *)startTimeMillis;
-(void)setStartTimeMillis:(NSNumber *)arg1 ;
@end

