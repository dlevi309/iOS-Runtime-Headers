/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class TIInputContextHistory, NSSet, NSString;

@interface UIInputContextHistory : NSObject {

	TIInputContextHistory* _tiInputContextHistory;

}

@property (nonatomic,readonly) NSSet * senderIdentifiers; 
@property (nonatomic,readonly) NSSet * recipientIdentifiers; 
@property (nonatomic,readonly) TIInputContextHistory * tiInputContextHistory;              //@synthesize tiInputContextHistory=_tiInputContextHistory - In the implementation block
@property (nonatomic,readonly) NSString * senderIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(id)mostRecentTextEntries:(unsigned long long)arg1 ;
-(TIInputContextHistory *)tiInputContextHistory;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2 ;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2 ;
-(NSSet *)recipientIdentifiers;
-(NSSet *)senderIdentifiers;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(NSString *)senderIdentifier;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
@end

