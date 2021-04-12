/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/

#import <DiagnosticExtensions/DEAttachmentItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSArray;

@interface DEAttachmentGroup : DEAttachmentItem <NSSecureCoding> {

	NSURL* _rootURL;
	NSArray* _attachmentItems;

}

@property (nonatomic,retain) NSURL * rootURL;                        //@synthesize rootURL=_rootURL - In the implementation block
@property (nonatomic,retain) NSArray * attachmentItems;              //@synthesize attachmentItems=_attachmentItems - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithName:(id)arg1 rootURL:(id)arg2 ;
+(id)createWithName:(id)arg1 rootURL:(id)arg2 attachmentItems:(id)arg3 ;
-(id)attachToDestinationDir:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRootURL:(NSURL *)arg1 ;
-(NSURL *)rootURL;
-(void)setAttachmentItems:(NSArray *)arg1 ;
-(NSArray *)attachmentItems;
-(id)initWithCoder:(id)arg1 ;
@end

