/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface _BlastDoorLPArtworkMetadata : NSObject <NSSecureCoding, NSCopying> {

	unsigned _version;
	NSURL* _URL;
	NSDictionary* _colors;

}

@property (nonatomic,readonly) unsigned version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * colors;              //@synthesize colors=_colors - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)colors;
-(void)setColors:(NSDictionary *)arg1 ;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

