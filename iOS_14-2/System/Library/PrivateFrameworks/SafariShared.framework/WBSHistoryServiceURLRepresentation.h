/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _urlString;
	NSData* _urlHash;
	NSData* _urlSalt;

}

@property (nonatomic,copy,readonly) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSData * urlHash;                  //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * urlSalt;                  //@synthesize urlSalt=_urlSalt - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)urlString;
-(id)initWithURLString:(id)arg1 ;
-(NSData *)urlSalt;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)urlHash;
-(id)description;
-(unsigned long long)hash;
-(id)initWithURLHash:(id)arg1 salt:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

