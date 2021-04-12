/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThread.framework/CoreThread
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface THThreadNetwork : NSObject <NSSecureCoding> {

	NSString* _networkName;
	NSData* _extendedPANID;

}

@property (nonatomic,readonly) NSString * networkName;              //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,readonly) NSData * extendedPANID;              //@synthesize extendedPANID=_extendedPANID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)networkName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)extendedPANID;
-(id)initWithName:(id)arg1 extendedPANID:(id)arg2 ;
@end

