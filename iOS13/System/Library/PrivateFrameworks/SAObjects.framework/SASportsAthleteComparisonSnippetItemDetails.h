/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIAppPunchOut, SASportsMetadata, NSString;

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIAppPunchOut * leagueAppPunchOut; 
@property (nonatomic,retain) SASportsMetadata * metadata; 
@property (nonatomic,retain) SAUIAppPunchOut * providerPunchOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)athleteComparisonSnippetItemDetails;
+(id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMetadata:(SASportsMetadata *)arg1 ;
-(SASportsMetadata *)metadata;
-(id)encodedClassName;
-(SAUIAppPunchOut *)leagueAppPunchOut;
-(void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)providerPunchOut;
-(void)setProviderPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

