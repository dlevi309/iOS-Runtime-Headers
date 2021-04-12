/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSArray, NSString;

@interface SAGuidanceCheckForGuideUpdates : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * currentGuideTag; 
@property (nonatomic,copy) NSArray * supportedFeatures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)checkForGuideUpdates;
+(id)checkForGuideUpdatesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)supportedFeatures;
-(id)encodedClassName;
-(void)setSupportedFeatures:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(NSNumber *)currentGuideTag;
-(void)setCurrentGuideTag:(NSNumber *)arg1 ;
@end

