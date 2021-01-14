/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class TIInputContextHistory, NSSet, NSString;

@interface UIInputContextHistory : NSObject {

	TIInputContextHistory* _tiInputContextHistory;

}

@property (nonatomic,readonly) NSSet * senderIdentifiers; 
@property (nonatomic,readonly) NSSet * recipientIdentifiers; 
@property (nonatomic,readonly) NSSet * recipientNames; 
@property (nonatomic,readonly) TIInputContextHistory * tiInputContextHistory;              //@synthesize tiInputContextHistory=_tiInputContextHistory - In the implementation block
@property (nonatomic,readonly) NSString * senderIdentifier; 
-(id)mostRecentTextEntries:(unsigned long long)arg1 ;
-(TIInputContextHistory *)tiInputContextHistory;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
-(NSSet *)senderIdentifiers;
-(NSSet *)recipientIdentifiers;
-(NSString *)senderIdentifier;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2 ;
-(NSSet *)recipientNames;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2 ;
-(void)updateRecipientNames:(id)arg1 ;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

