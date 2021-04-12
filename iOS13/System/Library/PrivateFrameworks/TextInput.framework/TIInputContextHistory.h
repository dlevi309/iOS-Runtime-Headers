/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSSet, NSArray, NSString;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _entries;
	NSMutableArray* _pendingEntries;
	NSSet* _recipientIdentifiers;
	NSSet* _senderIdentifiers;

}

@property (nonatomic,readonly) NSArray * entries;                                    //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) NSArray * pendingEntries;                             //@synthesize pendingEntries=_pendingEntries - In the implementation block
@property (nonatomic,readonly) NSSet * senderIdentifiers;                            //@synthesize senderIdentifiers=_senderIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * recipientIdentifiers;                         //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * aggregateText; 
@property (nonatomic,readonly) NSString * mostRecentNonSenderTextEntry; 
@property (nonatomic,readonly) BOOL mostRecentTextEntryIsByMe; 
@property (nonatomic,readonly) NSString * mostRecentTextEntryLogString; 
@property (nonatomic,readonly) NSString * senderIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)entries;
-(id)mostRecentTextEntries:(unsigned long long)arg1 ;
-(void)assertCheckpointForCoding;
-(BOOL)hasPendingEntries;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2 ;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2 ;
-(NSSet *)recipientIdentifiers;
-(NSSet *)senderIdentifiers;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(NSString *)senderIdentifier;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
-(void)_enumerateAllEntriesAsInputContextEntries:(/*^block*/id)arg1 ;
-(void)enumerateAllEntries:(/*^block*/id)arg1 ;
-(void)enumeratePendingEntries:(/*^block*/id)arg1 ;
-(void)appendPendingEntriesFromInputContextHistory:(id)arg1 ;
-(NSString *)aggregateText;
-(NSString *)mostRecentNonSenderTextEntry;
-(NSString *)mostRecentTextEntryLogString;
-(BOOL)mostRecentTextEntryIsByMe;
-(NSArray *)pendingEntries;
@end

