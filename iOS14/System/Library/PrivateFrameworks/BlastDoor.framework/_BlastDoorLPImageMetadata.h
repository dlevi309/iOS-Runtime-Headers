/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface _BlastDoorLPImageMetadata : NSObject <NSSecureCoding> {

	unsigned _version;
	NSURL* _URL;
	NSString* _type;
	NSString* _accessibilityText;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGSize size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;              //@synthesize accessibilityText=_accessibilityText - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accessibilityText;
-(id)init;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(CGSize)size;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(unsigned)version;
-(BOOL)isEqual:(id)arg1 ;
@end

