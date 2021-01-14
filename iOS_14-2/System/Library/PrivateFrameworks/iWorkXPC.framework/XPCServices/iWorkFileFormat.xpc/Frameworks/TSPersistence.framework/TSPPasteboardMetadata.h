/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>

@class TSPDataMetadataMap, NSHashTable;

@interface TSPPasteboardMetadata : TSPObject {

	PasteboardMetadata* _message;
	TSPDataMetadataMap* _identifierToDataMetadataMap;
	BOOL _isCrossAppPaste;
	BOOL _isCrossDocumentPaste;
	NSHashTable* _dataReferences;

}

@property (nonatomic,readonly) BOOL isCrossAppPaste;                      //@synthesize isCrossAppPaste=_isCrossAppPaste - In the implementation block
@property (nonatomic,readonly) BOOL isCrossDocumentPaste;                 //@synthesize isCrossDocumentPaste=_isCrossDocumentPaste - In the implementation block
@property (nonatomic,readonly) NSHashTable * dataReferences;              //@synthesize dataReferences=_dataReferences - In the implementation block
+(id)bundleIdentifier;
+(id)appNameAndVersion;
-(PasteboardMetadata*)message;
-(id)initWithContext:(id)arg1 ;
-(long long)tsp_identifier;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isCrossAppPaste;
-(NSHashTable *)dataReferences;
-(id)dataMetadataForDataIdentifier:(long long)arg1 ;
-(void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2 ;
-(BOOL)isCrossDocumentPaste;
-(id)initWithContext:(id)arg1 dataReferences:(id)arg2 ;
@end

