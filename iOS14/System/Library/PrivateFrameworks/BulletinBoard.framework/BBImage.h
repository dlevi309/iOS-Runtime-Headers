/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface BBImage : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	NSString* _path;
	NSString* _name;
	NSString* _bundlePath;

}

@property (nonatomic,copy) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * path;                    //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;              //@synthesize bundlePath=_bundlePath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithName:(id)arg1 inBundlePath:(id)arg2 ;
+(id)imageWithPath:(id)arg1 ;
+(id)imageWithName:(id)arg1 inBundle:(id)arg2 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(NSString *)bundlePath;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setData:(NSData *)arg1 ;
-(NSString *)name;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

