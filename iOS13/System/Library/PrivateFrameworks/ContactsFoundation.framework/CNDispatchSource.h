/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)source;
-(void)cancel;
-(id)initWithSource:(id)arg1 ;
@end

