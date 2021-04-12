/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)webURL;
-(NSString *)postData;
-(void)setWebURL:(NSString *)arg1 ;
-(void)setPostData:(NSString *)arg1 ;
@end

