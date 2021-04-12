/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAPerformDataDetectionMatch : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSString * dataDetectionType; 
@property (nonatomic,copy) NSNumber * length; 
@property (nonatomic,copy) NSNumber * location; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)performDataDetectionMatch;
+(id)performDataDetectionMatchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLength:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)dataDetectionType;
-(void)setDataDetectionType:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSNumber *)location;
-(NSNumber *)length;
-(void)setLocation:(NSNumber *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

