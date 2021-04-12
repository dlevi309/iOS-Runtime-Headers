/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDigitCount:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDigitGroups;
-(unsigned long long)numberOfDigitsInGroup:(unsigned long long)arg1 ;
-(unsigned long long)totalDigitCount;
-(id)initWithGroupLengths:(id)arg1 ;
@end

