/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedSuggestedResult : SAAceView

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * displayText; 
@property (assign,nonatomic) long long rank; 
+(id)paraphrasedSuggestedResult;
+(id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRank:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)rank;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)displayText;
-(id<SAClientBoundCommand>)command;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
@end

