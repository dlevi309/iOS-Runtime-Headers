/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding> {

	NSArray* _pmkList;
	NSArray* _passphraseList;

}

@property (nonatomic,readonly) NSArray * pmkList;                     //@synthesize pmkList=_pmkList - In the implementation block
@property (nonatomic,readonly) NSArray * passphraseList;              //@synthesize passphraseList=_passphraseList - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)pmkList;
-(NSArray *)passphraseList;
-(id)initWithPMKList:(id)arg1 passphraseList:(id)arg2 ;
@end

