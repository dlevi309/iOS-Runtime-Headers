/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFWebResource.h>

@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource {

	WFFileRepresentation* _file;

}

@property (nonatomic,readonly) WFFileRepresentation * file;              //@synthesize file=_file - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)MIMEType;
-(WFFileRepresentation *)file;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(id)data;
-(id)initWithCoder:(id)arg1 ;
-(id)loadInWKWebView:(id)arg1 ;
@end

