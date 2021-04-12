/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSObject.h>

@class NUVersion;

@interface NUJSVersion : NUJSObject

@property (nonatomic,readonly) NUVersion * version; 
-(NUVersion *)version;
-(id)toString;
-(BOOL)hasProperty:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithVersion:(id)arg1 context:(id)arg2 ;
@end

