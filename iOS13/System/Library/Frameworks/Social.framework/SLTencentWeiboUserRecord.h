/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSString* _openid;
	NSURL* _objectID;

}

@property (nonatomic,retain) NSURL * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * openid;               //@synthesize openid=_openid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)objectID;
-(void)setObjectID:(NSURL *)arg1 ;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setOpenid:(NSString *)arg1 ;
-(NSString *)openid;
@end

