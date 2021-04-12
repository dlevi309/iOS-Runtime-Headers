/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXCallDirectoryEntryData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CXCallDirectoryPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding> {

	NSData* _phoneNumberData;

}

@property (nonatomic,retain) NSData * phoneNumberData;                     //@synthesize phoneNumberData=_phoneNumberData - In the implementation block
@property (nonatomic,readonly) const long long* phoneNumbers; 
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(const long long*)phoneNumbers;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)phoneNumberData;
-(long long)phoneNumberAtIndex:(unsigned long long)arg1 ;
-(void)setPhoneNumberData:(NSData *)arg1 ;
@end

