/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFWebResource.h>

@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource {

	WFFileRepresentation* _file;

}

@property (nonatomic,readonly) WFFileRepresentation * file;              //@synthesize file=_file - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(WFFileRepresentation *)file;
-(id)MIMEType;
-(id)initWithFile:(id)arg1 ;
-(id)loadInWKWebView:(id)arg1 ;
@end

