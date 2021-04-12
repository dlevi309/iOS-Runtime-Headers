/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL, NSDictionary;

@interface CRKChapter : NSObject <NSSecureCoding> {

	NSString* _title;
	NSArray* _subchapters;
	NSURL* _webURL;

}

@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * subchapters;                                   //@synthesize subchapters=_subchapters - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                                        //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * JSONRepresentation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(NSDictionary *)JSONRepresentation;
-(NSArray *)subchapters;
-(void)setSubchapters:(NSArray *)arg1 ;
@end

