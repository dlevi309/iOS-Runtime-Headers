/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAGuidanceGuideSnippet, NSNumber, NSString, SAGuidanceSuggestedUtterances;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (nonatomic,retain) SAGuidanceGuideSnippet * guideSnippet; 
@property (nonatomic,copy) NSNumber * guideTag; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,retain) SAGuidanceSuggestedUtterances * suggestedUtterances; 
+(id)guideUpdate;
+(id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setSuggestedUtterances:(SAGuidanceSuggestedUtterances *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SAGuidanceGuideSnippet *)guideSnippet;
-(void)setGuideSnippet:(SAGuidanceGuideSnippet *)arg1 ;
-(NSNumber *)guideTag;
-(void)setGuideTag:(NSNumber *)arg1 ;
-(SAGuidanceSuggestedUtterances *)suggestedUtterances;
@end

