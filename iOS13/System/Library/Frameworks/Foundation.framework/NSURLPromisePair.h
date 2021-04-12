/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface NSURLPromisePair : NSObject <NSSecureCoding> {

	NSURL* _logicalURL;
	NSURL* _physicalURL;

}

@property (copy,readonly) NSURL * URL; 
@property (readonly) NSURL * logicalURL;               //@synthesize logicalURL=_logicalURL - In the implementation block
@property (readonly) NSURL * physicalURL;              //@synthesize physicalURL=_physicalURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2 ;
+(id)pairWithURL:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)logicalURL;
-(NSURL *)URL;
-(NSURL *)physicalURL;
@end

