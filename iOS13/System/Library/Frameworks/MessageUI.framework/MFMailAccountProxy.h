/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSDictionary, NSString, NSArray;

@interface MFMailAccountProxy : NSObject {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSString * fullUserName; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * firstEmailAddress; 
@property (nonatomic,readonly) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * fromEmailAddresses; 
@property (nonatomic,readonly) NSArray * fromEmailAddressesIncludingDisabled; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) BOOL isDefaultDeliveryAccount; 
@property (nonatomic,readonly) BOOL supportsThreadOperations; 
@property (nonatomic,readonly) BOOL restrictsRepliesAndForwards; 
@property (nonatomic,readonly) BOOL supportsMailDrop; 
@property (nonatomic,readonly) BOOL isManaged; 
@property (nonatomic,readonly) id mailAccount; 
-(NSString *)uniqueID;
-(BOOL)_isActive;
-(NSArray *)emailAddresses;
-(NSString *)username;
-(BOOL)isManaged;
-(BOOL)supportsMailDrop;
-(BOOL)supportsThreadOperations;
-(NSString *)fullUserName;
-(NSArray *)fromEmailAddressesIncludingDisabled;
-(NSString *)firstEmailAddress;
-(NSArray *)fromEmailAddresses;
-(id)mailAccount;
-(id)_initWithProperties:(id)arg1 ;
-(BOOL)_isRestricted;
-(BOOL)isDefaultDeliveryAccount;
-(id)_emailAddressesAndAliases;
-(BOOL)restrictsRepliesAndForwards;
@end

