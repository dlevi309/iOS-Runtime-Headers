/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * position; 
@property (nonatomic,copy) NSNumber * primary; 
@property (nonatomic,copy) NSString * source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)teamRankWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)teamRank;
-(NSNumber *)position;
-(id)groupIdentifier;
-(NSNumber *)primary;
-(id)encodedClassName;
-(void)setSource:(NSString *)arg1 ;
-(void)setPosition:(NSNumber *)arg1 ;
-(void)setPrimary:(NSNumber *)arg1 ;
-(NSString *)source;
@end

