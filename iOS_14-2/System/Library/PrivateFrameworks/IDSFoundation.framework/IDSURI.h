/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithUnprefixedURI:(id)arg1 ;
-(id)initWithPrefixedURI:(id)arg1 ;
-(BOOL)isEqualToURI:(id)arg1 ;
-(void)setPrefixedURI:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)prefixedURI;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)unprefixedURI;
@end

