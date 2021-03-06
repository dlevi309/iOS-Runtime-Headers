/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue;
#import <TSPersistence/TSPersistence-Structs.h>
@class TSPObjectContext, NSObject, NSMutableOrderedSet, NSMutableDictionary;

@interface TSPDescriptionGenerator : NSObject {

	TSPObjectContext* _context;
	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableOrderedSet* _components;
	map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > >* _messageMap;
	NSMutableDictionary* _objects;
	NSMutableDictionary* _uuidMap;
	NSMutableDictionary* _inverseUUIDMap;
	NSMutableDictionary* _dataMap;
	/*^block*/id _objectIdentifierForUUIDHandler;
	/*^block*/id _printerCustomPropertiesHandler;
	/*^block*/id _dataDigestHandler;

}
+(BOOL)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 ;
+(id)directoryForDocumentUUID:(id)arg1 versionUUID:(id)arg2 ;
+(id)filenameForPackageIdentifier:(unsigned char)arg1 ;
+(BOOL)dumpMessagesForDocument:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 toURL:(id)arg4 ;
+(BOOL)dumpMessagesForSupport:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 ;
-(id)init;
-(void)addComponent:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)initWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)_strongReferencesFromArchiver:(id)arg1 ;
-(map<unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<std::__1::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributes, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributes> > > >, std::__1::shared_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > >, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::tuple<std::__1::shared_ptr<google::protobuf::Message>, std::__1::shared_ptr<std::__1::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributes, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributes> > > >, std::__1::shared_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > > > >*)_messageAlternateMapFromArchivableContent:(id)arg1 ;
-(void)processPackageMetadataMessage:(shared_ptr<google::protobuf::Message>*)arg1 ;
-(BOOL)dumpMessagesToFilePath:(id)arg1 ;
-(BOOL)dumpComponentMessages:(id)arg1 printNewLine:(BOOL)arg2 withPrinter:(ReferencePrinter*)arg3 outputStream:(FileOutputStream*)arg4 ;
-(void)performPrintOperationBlock:(/*^block*/id)arg1 ;
-(void)addUUIDMapEntriesForComponent:(id)arg1 ;
-(void)addMessage:(const Message*)arg1 withStrongReferencesMap:(unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)arg2 forObjectIdentifier:(long long)arg3 ;
-(void)addArchiver:(id)arg1 ;
-(BOOL)dumpMessagesForDocumentUUID:(id)arg1 versionUUID:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(id)descriptionForIdentifier:(long long)arg1 ;
@end

