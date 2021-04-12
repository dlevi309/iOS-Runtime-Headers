/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSweetgumUserConsentFlowInfo : NSObject <NSSecureCoding> {

	NSString* _webURL;
	NSString* _postData;

}

@property (nonatomic,retain) NSString * webURL;                //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,retain) NSString * postData;              //@synthesize postData=_postData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)webURL;
-(NSString *)postData;
-(void)setWebURL:(NSString *)arg1 ;
-(void)setPostData:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

