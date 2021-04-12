/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface CRKBook : NSObject <NSSecureCoding> {

	BOOL _hasChapters;
	NSString* _title;
	NSString* _author;
	NSString* _path;
	NSData* _image;
	NSURL* _webURL;
	long long _type;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;               //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSData * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * webURL;                  //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasChapters;              //@synthesize hasChapters=_hasChapters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(id)imageDescription;
-(void)setHasChapters:(BOOL)arg1 ;
-(BOOL)hasChapters;
@end

