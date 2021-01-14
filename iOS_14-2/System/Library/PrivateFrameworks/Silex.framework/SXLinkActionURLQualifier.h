/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLinkActionURLQualifier.h>

@protocol SXLinkActionURLQualifier <NSObject>
@optional
-(BOOL)allowOpenInNewWindowForURL:(id)arg1;

@required
-(BOOL)allowOpenInSafariForURL:(id)arg1;
-(BOOL)allowCopyingOfURL:(id)arg1;

@end


@class NSString;

@interface SXLinkActionURLQualifier : NSObject <SXLinkActionURLQualifier>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowOpenInNewWindowForURL:(id)arg1 ;
-(BOOL)allowOpenInSafariForURL:(id)arg1 ;
-(BOOL)allowCopyingOfURL:(id)arg1 ;
@end

