/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@protocol IAMApplicationContextProvider;
@class ICInAppMessageMetadataEntry, NSArray, NSDictionary, NSDate, NSString;

@interface IAMEvaluator : NSObject {

	ICInAppMessageMetadataEntry* _currentMetadata;
	ICInAppMessageMetadataEntry* _currentProximityMetadata;
	NSArray* _messageEntries;
	NSDictionary* _metadataEntries;
	NSDate* _lastDisplayTimeForRestrictedPresentationPolicyGroup;
	NSDate* _lastDisplayTimeForNormalPresentationPolicyGroup;
	id<IAMApplicationContextProvider> _applicationContext;
	NSString* _hostBundleIdentifier;
	NSDictionary* _messageGroupsByGroupIdentifier;
	NSArray* _passingMessageEntries;
	NSArray* _messagesCloseToPassing;

}

@property (retain) NSArray * passingMessageEntries;               //@synthesize passingMessageEntries=_passingMessageEntries - In the implementation block
@property (retain) NSArray * messagesCloseToPassing;              //@synthesize messagesCloseToPassing=_messagesCloseToPassing - In the implementation block
+(long long)_compareCurrentTimeWithMessageTime:(double)arg1 ;
+(BOOL)_isMessageWithinDateRange:(id)arg1 ;
+(BOOL)applicationContext:(id)arg1 allowsPresentationForPolicyGroup:(long long)arg2 withLastDisplayTime:(id)arg3 ;
-(void)setMessagesCloseToPassing:(NSArray *)arg1 ;
-(unsigned long long)_calculateRuleProximity:(id)arg1 forMessageEntry:(id)arg2 ;
-(id)_valueForCondition:(id)arg1 messageBundleIdentifier:(id)arg2 messageMetadata:(id)arg3 ;
-(NSArray *)passingMessageEntries;
-(id)initWithMessageEntries:(id)arg1 metadataEntries:(id)arg2 applicationContext:(id)arg3 hostBundleIdentifier:(id)arg4 messageGroups:(id)arg5 lastDisplayTimeForRestrictedPresentationPolicyGroup:(id)arg6 lastDisplayTimeForNormalPresentationPolicyGroup:(id)arg7 ;
-(BOOL)_evaluateCondition:(id)arg1 forMessageEntry:(id)arg2 ;
-(id)_contextPropertyWithName:(id)arg1 forMessageGroupIdentifier:(id)arg2 ;
-(BOOL)_evaluateRule:(id)arg1 forMessageEntry:(id)arg2 ;
-(BOOL)_doesPresentationPolicyAllowPresentationOfMessage:(id)arg1 ;
-(NSArray *)messagesCloseToPassing;
-(BOOL)_didCacheResourcesForMessageIfRequired:(id)arg1 ;
-(unsigned long long)_calculateCompoundRuleProximity:(id)arg1 forMessageEntry:(id)arg2 ;
-(void)setPassingMessageEntries:(NSArray *)arg1 ;
-(id)_contextPropertyWithName:(id)arg1 messageBundleIdentifier:(id)arg2 conditionBundleIdentifier:(id)arg3 ;
-(unsigned long long)_calculateConditionProximity:(id)arg1 forMessageEntry:(id)arg2 ;
-(id)computeMessagesCloseToPassingWithProximityThreshold:(unsigned long long)arg1 ;
-(BOOL)_evaluateCompoundRule:(id)arg1 forMessageEntry:(id)arg2 ;
-(id)computePassingMessageEntries;
-(unsigned long long)_messageEntryProximity:(id)arg1 ;
@end

