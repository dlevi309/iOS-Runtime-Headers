/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSArray, NSString;

@interface SAGuidanceCheckForGuideUpdates : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * currentGuideTag; 
@property (nonatomic,copy) NSArray * supportedFeatures; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)checkForGuideUpdates;
+(id)checkForGuideUpdatesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)supportedFeatures;
-(NSNumber *)currentGuideTag;
-(void)setCurrentGuideTag:(NSNumber *)arg1 ;
-(void)setSupportedFeatures:(NSArray *)arg1 ;
@end

