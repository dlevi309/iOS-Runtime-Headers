/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface TVRCPINEntryAttributes : NSObject <NSSecureCoding> {

	NSArray* _groupLengths;

}

@property (nonatomic,readonly) unsigned long long totalDigitCount; 
@property (nonatomic,readonly) unsigned long long numberOfDigitGroups; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGroupLengths:(id)arg1 ;
-(id)initWithDigitCount:(unsigned long long)arg1 ;
-(unsigned long long)totalDigitCount;
-(unsigned long long)numberOfDigitGroups;
-(unsigned long long)numberOfDigitsInGroup:(unsigned long long)arg1 ;
@end

