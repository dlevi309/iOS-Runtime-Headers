/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)performDataDetectionMatch;
+(id)performDataDetectionMatchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)length;
-(void)setLength:(NSNumber *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)location;
-(void)setLocation:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dataDetectionType;
-(void)setDataDetectionType:(NSString *)arg1 ;
@end

