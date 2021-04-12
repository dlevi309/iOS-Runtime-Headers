/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)url;
-(id)description;
-(void)event;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 url:(id)arg2 queue:(id)arg3 ;
@end

