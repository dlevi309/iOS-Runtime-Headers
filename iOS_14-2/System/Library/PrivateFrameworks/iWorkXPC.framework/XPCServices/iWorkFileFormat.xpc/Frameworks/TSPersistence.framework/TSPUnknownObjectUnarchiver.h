/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPUnarchiver.h>

@protocol OS_dispatch_data;
@class NSObject, NSString;

@interface TSPUnknownObjectUnarchiver : TSPUnarchiver {

	shared_ptr<TSP::ArchiveInfo>* _archiveInfo;
	NSObject*<OS_dispatch_data> _messagesData;
	NSString* _packageLocator;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> messagesData;              //@synthesize messagesData=_messagesData - In the implementation block
@property (nonatomic,readonly) NSString * packageLocator;                             //@synthesize packageLocator=_packageLocator - In the implementation block
-(const Message*)message;
-(NSString *)packageLocator;
-(BOOL)canValidateReferences;
-(id)initWithMessageType:(unsigned)arg1 message:(unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message> >*)arg2 identifier:(long long)arg3 strongReferences:(unique_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >, std::__1::default_delete<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > >*)arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9 ;
-(id)initWithIdentifier:(long long)arg1 archiveInfo:(shared_ptr<TSP::ArchiveInfo>*)arg2 messagesData:(id)arg3 packageLocator:(id)arg4 objectDelegate:(id)arg5 lazyReferenceDelegate:(id)arg6 delegate:(id)arg7 ;
-(shared_ptr<TSP::ArchiveInfo>*)archiveInfo;
-(NSObject*<OS_dispatch_data>)messagesData;
@end

