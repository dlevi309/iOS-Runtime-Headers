/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSString;

@interface DEDTestingFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)archivedClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(id)flattenDirectories:(id)arg1 ;
@end

