/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(NSString *)nameOnCard;
-(void)setNameOnCard:(NSString *)arg1 ;
@end

