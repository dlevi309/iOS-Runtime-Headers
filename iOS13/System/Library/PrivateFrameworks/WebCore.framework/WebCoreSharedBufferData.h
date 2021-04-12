/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment> >* _dataSegment;
	unsigned long long _position;

}
+(void)initialize;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithDataSegment:(const DataSegment=atomic<unsigned int>=cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}Variant<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>=(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>=(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> >=storage_wrapper<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> >=type=[16C]}}dummy_type)(__variant_data<WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>=(__variant_data<WTF::RetainPtr<const __CFData *> >=storage_wrapper<WTF::RetainPtr<const __CFData *> >=type=[8C]}}dummy_type)(__variant_data<WTF::FileSystemImpl::MappedFileData>=storage_wrapper<WTF::FileSystemImpl::MappedFileData>=type=[16C]}}dummy_type)))c}}Ref)arg1 position:(unsigned long long)arg2 ;
@end

