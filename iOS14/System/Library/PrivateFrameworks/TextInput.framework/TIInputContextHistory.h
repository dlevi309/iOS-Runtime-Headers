/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSSet* _recipientNames;

}

@property (nonatomic,readonly) NSArray * entries;                                    //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) NSArray * pendingEntries;                             //@synthesize pendingEntries=_pendingEntries - In the implementation block
@property (nonatomic,readonly) NSSet * senderIdentifiers;                            //@synthesize senderIdentifiers=_senderIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * recipientIdentifiers;                         //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * recipientNames;                               //@synthesize recipientNames=_recipientNames - In the implementation block
@property (nonatomic,readonly) NSString * aggregateText; 
@property (nonatomic,readonly) NSString * mostRecentNonSenderTextEntry; 
@property (nonatomic,readonly) BOOL mostRecentTextEntryIsByMe; 
@property (nonatomic,readonly) NSString * mostRecentTextEntryLogString; 
@property (nonatomic,readonly) NSString * senderIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)mostRecentTextEntries:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)aggregateText;
-(NSArray *)pendingEntries;
-(void)assertCheckpointForCoding;
-(void)_enumerateAllEntriesAsInputContextEntries:(/*^block*/id)arg1 ;
-(void)enumerateAllEntries:(/*^block*/id)arg1 ;
-(void)enumeratePendingEntries:(/*^block*/id)arg1 ;
-(NSString *)mostRecentNonSenderTextEntry;
-(void)appendPendingEntriesFromInputContextHistory:(id)arg1 ;
-(NSString *)mostRecentTextEntryLogString;
-(BOOL)mostRecentTextEntryIsByMe;
-(NSArray *)entries;
-(id)initWithCoder:(id)arg1 ;
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
-(BOOL)hasPendingEntries;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

