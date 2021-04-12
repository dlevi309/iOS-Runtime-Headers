/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface IDSURI : NSObject <NSCopying, NSSecureCoding> {

	NSString* _prefixedURI;

}

@property (nonatomic,retain) NSString * prefixedURI;                  //@synthesize prefixedURI=_prefixedURI - In the implementation block
@property (nonatomic,readonly) NSString * unprefixedURI; 
+(BOOL)supportsSecureCoding;
+(id)URIWithPrefixedURI:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)unprefixedURI;
-(id)initWithUnprefixedURI:(id)arg1 ;
-(id)initWithPrefixedURI:(id)arg1 ;
-(NSString *)prefixedURI;
-(BOOL)isEqualToURI:(id)arg1 ;
-(void)setPrefixedURI:(NSString *)arg1 ;
@end

