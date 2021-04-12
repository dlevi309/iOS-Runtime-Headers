/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)imageWithPath:(id)arg1 ;
+(id)imageWithName:(id)arg1 inBundlePath:(id)arg2 ;
+(id)imageWithName:(id)arg1 inBundle:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSData *)data;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSString *)path;
-(NSString *)bundlePath;
-(void)setData:(NSData *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4 ;
@end

