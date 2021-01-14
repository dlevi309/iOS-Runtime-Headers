/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BRProgressProxy.h>
#import <libobjc.A.dylib/BRProgressProxyDelegate.h>

@class NSString;

@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate> {

	NSString* _kind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2 ;
-(id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2 ;
-(id)initWithGlobalProgressKind:(id)arg1 ;
@end

