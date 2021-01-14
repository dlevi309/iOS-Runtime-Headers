/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)pairWithURL:(id)arg1 ;
+(id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)physicalURL;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)logicalURL;
-(void)dealloc;
@end

