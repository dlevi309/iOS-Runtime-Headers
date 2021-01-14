/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <CFNetwork/NSURLProtocol.h>

@interface NotesCIDURLProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2 ;
+(void)unregisterDataProviderForCIDURL:(id)arg1 ;
-(void)startLoading;
-(void)stopLoading;
@end

