/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKPhysicalCardOrder : NSObject <NSSecureCoding> {

	unsigned long long _reason;
	NSString* _nameOnCard;
	NSString* _artworkIdentifier;

}

@property (assign,nonatomic) unsigned long long reason;               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                     //@synthesize nameOnCard=_nameOnCard - In the implementation block
@property (nonatomic,copy) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(id)initWithCoder:(id)arg1 ;
-(void)setNameOnCard:(NSString *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(NSString *)nameOnCard;
@end

