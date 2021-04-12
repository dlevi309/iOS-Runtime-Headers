/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedAlternativeResult : SAAceView

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,copy) NSString * paraphrasedIntent; 
+(id)paraphrasedAlternativeResult;
+(id)paraphrasedAlternativeResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
-(id)encodedClassName;
-(NSString *)paraphrasedIntent;
-(void)setParaphrasedIntent:(NSString *)arg1 ;
@end

