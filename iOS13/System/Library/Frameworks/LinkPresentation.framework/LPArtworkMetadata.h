/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface LPArtworkMetadata : NSObject <NSSecureCoding, NSCopying> {

	unsigned _version;
	NSURL* _URL;
	NSDictionary* _colors;

}

@property (nonatomic,readonly) unsigned version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * colors;              //@synthesize colors=_colors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setColors:(NSDictionary *)arg1 ;
-(NSDictionary *)colors;
@end

