/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(NSString *)paraphrasedIntent;
-(void)setParaphrasedIntent:(NSString *)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)displayText;
-(id<SAClientBoundCommand>)command;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
@end

