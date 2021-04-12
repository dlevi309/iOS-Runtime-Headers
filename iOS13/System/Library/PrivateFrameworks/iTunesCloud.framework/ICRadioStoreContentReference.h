/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ICRadioStoreContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {

	NSNumber* _storeIdentifier;

}

@property (nonatomic,copy) NSNumber * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStoreIdentifier:(id)arg1 ;
-(NSNumber *)storeIdentifier;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(id)matchDictionary;
@end

