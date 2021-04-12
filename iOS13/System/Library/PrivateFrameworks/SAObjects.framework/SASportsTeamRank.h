/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)teamRank;
+(id)teamRankWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)groupIdentifier;
-(NSNumber *)position;
-(void)setPosition:(NSNumber *)arg1 ;
-(void)setPrimary:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)primary;
@end

