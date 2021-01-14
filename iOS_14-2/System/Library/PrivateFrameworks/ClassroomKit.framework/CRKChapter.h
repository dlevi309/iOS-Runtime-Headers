/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(id)init;
-(NSDictionary *)JSONRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSArray *)subchapters;
-(void)setSubchapters:(NSArray *)arg1 ;
@end

