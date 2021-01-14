/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallDirectoryPhoneNumberEntryData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying> {

	NSMutableData* _mutablePhoneNumberData;

}

@property (nonatomic,retain) NSMutableData * mutablePhoneNumberData;              //@synthesize mutablePhoneNumberData=_mutablePhoneNumberData - In the implementation block
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableData *)mutablePhoneNumberData;
-(void)setMutablePhoneNumberData:(NSMutableData *)arg1 ;
-(void)appendPhoneNumber:(long long)arg1 ;
@end

