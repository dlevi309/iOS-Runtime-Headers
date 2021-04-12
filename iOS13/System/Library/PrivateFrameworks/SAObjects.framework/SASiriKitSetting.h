/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SASiriKitSetting : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL applySASToFirstPartyDomains; 
@property (nonatomic,copy) NSArray * listOfSiriKitEnabledDomains; 
@property (assign,nonatomic) BOOL useSASAutoSelectionFeature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitSetting;
+(id)siriKitSettingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)useSASAutoSelectionFeature;
-(void)setUseSASAutoSelectionFeature:(BOOL)arg1 ;
-(BOOL)applySASToFirstPartyDomains;
-(void)setApplySASToFirstPartyDomains:(BOOL)arg1 ;
-(NSArray *)listOfSiriKitEnabledDomains;
-(void)setListOfSiriKitEnabledDomains:(NSArray *)arg1 ;
@end

