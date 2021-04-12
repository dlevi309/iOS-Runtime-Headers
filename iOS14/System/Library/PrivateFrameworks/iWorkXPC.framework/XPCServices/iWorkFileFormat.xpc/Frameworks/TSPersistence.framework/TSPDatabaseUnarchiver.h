/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPUnarchiver.h>

@interface TSPDatabaseUnarchiver : TSPUnarchiver {

	unsigned long long _databaseVersion;

}

@property (nonatomic,readonly) unsigned long long preUFFVersion;              //@synthesize databaseVersion=_databaseVersion - In the implementation block
-(unsigned long long)preUFFVersion;
-(BOOL)canValidateReferences;
-(id)initWithMessageType:(unsigned)arg1 message:(unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message> >*)arg2 identifier:(long long)arg3 strongReferences:(unique_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >, std::__1::default_delete<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > >*)arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9 ;
-(id)initWithMessageType:(unsigned)arg1 message:(unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message> >*)arg2 identifier:(long long)arg3 strongReferences:(unique_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >, std::__1::default_delete<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > >*)arg4 databaseVersion:(unsigned long long)arg5 objectDelegate:(id)arg6 lazyReferenceDelegate:(id)arg7 delegate:(id)arg8 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)arg1 ;
@end

