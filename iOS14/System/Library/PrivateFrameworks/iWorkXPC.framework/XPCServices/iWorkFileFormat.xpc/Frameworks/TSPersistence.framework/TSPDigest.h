/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDigest : NSObject <NSCopying> {

	array<unsigned char, 20> _digestData;

}

@property (nonatomic,readonly) const array<unsigned char* digestData; 
@property (nonatomic,readonly) NSString * digestString; 
+(id)emptyDataDigest;
+(id)digestWithDigestString:(id)arg1 ;
+(id)digestFromNSData:(id)arg1 ;
+(id)digestFromDispatchData:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDigestString:(id)arg1 ;
-(NSString *)digestString;
-(id)initFromNSData:(id)arg1 ;
-(id)initFromDispatchData:(id)arg1 ;
-(const array<unsigned char*)digestData;
-(id)initFromSHA1Context:(CC_SHA1state_st*)arg1 ;
-(id)initFromBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)initFromProtobufString:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(void)saveToProtobufString:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
@end

