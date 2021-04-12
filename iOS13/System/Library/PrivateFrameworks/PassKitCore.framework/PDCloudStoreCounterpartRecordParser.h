/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary, NSArray;

@interface PDCloudStoreCounterpartRecordParser : NSObject {

	NSMutableDictionary* _identifierToParserZones;
	NSArray* _validRecordTypes;
	NSArray* _recordNamePrefixes;

}
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isValidRecordTypeForRecord:(id)arg1 ;
-(id)_parseIdentifierForRecord:(id)arg1 ;
-(id)allRecordsFromPush:(BOOL)arg1 ;
-(id)allRecordsWithIdentifier:(id)arg1 fromPush:(BOOL)arg2 ;
-(id)initWithValidRecordTypes:(id)arg1 recordNamePrefixes:(id)arg2 ;
-(void)addRecords:(id)arg1 fromPush:(BOOL)arg2 ;
-(void)removeIdentifiers:(id)arg1 ;
@end

