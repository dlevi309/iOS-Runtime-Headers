/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSString, NSDate, NSDictionary;

@interface WBSAddressBookMatch : WBSFormAutoFillItem {

	id _value;
	NSString* _property;
	NSString* _key;
	NSString* _identifier;
	NSString* _label;
	NSString* _uniqueID;

}

@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSDate * dateValue; 
@property (nonatomic,copy) NSString * property;                                           //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSString * key;                                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * uniqueID;                                       //@synthesize uniqueID=_uniqueID - In the implementation block
+(id)addressBookMatchWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(NSString *)stringValue;
-(NSString *)identifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uniqueID;
-(NSString *)label;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(id)completion;
-(void)_setValue:(id)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5 ;
-(id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5 uniqueID:(id)arg6 ;
-(id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 ;
@end

