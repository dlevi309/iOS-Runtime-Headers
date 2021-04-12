/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CRKBookmark : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _urlString;
	NSArray* _childBookmarks;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * urlString;                  //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSArray * childBookmarks;              //@synthesize childBookmarks=_childBookmarks - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bookmarkFromDMFBookmark:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)isFolder;
-(void)setChildBookmarks:(NSArray *)arg1 ;
-(NSArray *)childBookmarks;
@end

