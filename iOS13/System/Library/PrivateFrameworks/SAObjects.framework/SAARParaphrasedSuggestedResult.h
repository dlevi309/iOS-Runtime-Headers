/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
-(id)encodedClassName;
@end

