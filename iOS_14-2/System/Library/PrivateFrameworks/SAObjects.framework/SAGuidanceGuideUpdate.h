/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setGuideSnippet:(SAGuidanceGuideSnippet *)arg1 ;
-(void)setGuideTag:(NSNumber *)arg1 ;
-(SAGuidanceSuggestedUtterances *)suggestedUtterances;
-(NSString *)languageCode;
-(SAGuidanceGuideSnippet *)guideSnippet;
-(BOOL)mutatingCommand;
-(NSNumber *)guideTag;
-(void)setSuggestedUtterances:(SAGuidanceSuggestedUtterances *)arg1 ;
@end

