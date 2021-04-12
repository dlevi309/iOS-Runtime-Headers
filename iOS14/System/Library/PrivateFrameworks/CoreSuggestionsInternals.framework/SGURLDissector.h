/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>

@class NSString;

@interface SGURLDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedBundleIdentifiers;
-(id)urlsFromText:(id)arg1 handle:(id)arg2 dataDetectorMatches:(id)arg3 bundleIdentifier:(id)arg4 domainIdentifier:(id)arg5 uniqueIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 isOutgoingDocument:(BOOL)arg11 ;
-(id)_titleFromMessagesSynthesizedTextContent:(id)arg1 ;
-(id)urlsFromAttributes:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(BOOL)arg10 ;
-(id)urlsFromURLs:(id)arg1 handle:(id)arg2 bundleIdentifier:(id)arg3 domainIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(double)arg8 receivedAt:(id)arg9 isOutgoingDocument:(BOOL)arg10 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
@end

