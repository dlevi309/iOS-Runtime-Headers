/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)urlString;
-(id)initWithURLString:(id)arg1 ;
-(NSData *)urlHash;
-(NSData *)urlSalt;
-(id)initWithURLHash:(id)arg1 salt:(id)arg2 ;
@end

