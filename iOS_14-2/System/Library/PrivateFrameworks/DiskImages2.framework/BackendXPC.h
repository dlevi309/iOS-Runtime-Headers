/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSUUID;

@interface BackendXPC : NSObject <NSSecureCoding, NSCoding> {

	unique_ptr<crypto::header, std::__1::default_delete<crypto::header> >* _cryptoHeader;
	shared_ptr<Backend>* _backend;

}

@property (assign,nonatomic) shared_ptr<Backend>* backend;              //@synthesize backend=_backend - In the implementation block
@property (nonatomic,readonly) NSUUID * instanceID; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)instanceID;
-(void)setBackend:(shared_ptr<Backend>*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBackend:(shared_ptr<Backend>*)arg1 ;
-(id)description;
-(shared_ptr<Backend>*)backend;
-(id)initWithCoder:(id)arg1 ;
-(unique_ptr<crypto::header, std::__1::default_delete<crypto::header> >*)getCryptoHeader;
-(BOOL)checkIfEncryptedWithErrno:(int*)arg1 ;
@end

