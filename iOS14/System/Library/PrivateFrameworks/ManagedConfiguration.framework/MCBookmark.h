/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying> {

	NSURL* _URL;
	NSString* _title;
	NSString* _path;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * path;               //@synthesize path=_path - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(id)serializableDictionary;
-(id)initWithSerializableDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)description;
-(NSURL *)URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

