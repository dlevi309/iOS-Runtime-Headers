/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNCancelable.h>

@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface CNDispatchSource : NSObject <CNCancelable> {

	NSObject*<OS_dispatch_source> _source;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSource:(id)arg1 ;
-(void)cancel;
-(id)source;
@end

