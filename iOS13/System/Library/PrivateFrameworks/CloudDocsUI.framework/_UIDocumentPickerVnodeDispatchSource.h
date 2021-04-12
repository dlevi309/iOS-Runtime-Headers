/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_source, _UIDocumentPickerVnodeDispatchSourceDelegate;
@class NSObject, NSURL;

@interface _UIDocumentPickerVnodeDispatchSource : NSObject <NSCopying> {

	NSObject*<OS_dispatch_source> _source;
	id<_UIDocumentPickerVnodeDispatchSourceDelegate> _target;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(NSURL *)url;
-(void)event;
-(id)initWithTarget:(id)arg1 url:(id)arg2 queue:(id)arg3 ;
@end

