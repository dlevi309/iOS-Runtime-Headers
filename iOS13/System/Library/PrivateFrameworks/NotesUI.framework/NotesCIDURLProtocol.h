/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <CFNetwork/NSURLProtocol.h>

@interface NotesCIDURLProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2 ;
+(void)unregisterDataProviderForCIDURL:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end

