/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isActive;
-(BOOL)isManaged;
-(NSString *)uniqueID;
-(NSArray *)fromEmailAddresses;
-(NSArray *)emailAddresses;
-(NSString *)username;
-(id)_initWithProperties:(id)arg1 ;
-(BOOL)supportsMailDrop;
-(BOOL)isDefaultDeliveryAccount;
-(id)_emailAddressesAndAliases;
-(BOOL)restrictsRepliesAndForwards;
-(BOOL)_isRestricted;
-(BOOL)supportsThreadOperations;
-(id)mailAccount;
-(NSString *)fullUserName;
-(NSArray *)fromEmailAddressesIncludingDisabled;
-(NSString *)firstEmailAddress;
@end

