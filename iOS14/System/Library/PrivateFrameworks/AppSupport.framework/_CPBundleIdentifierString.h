/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/

#import <AppSupport/AppSupport-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface _CPBundleIdentifierString : NSString {

	NSString* _executablePath;
	NSString* _bundleIdentifierOrProcessName;
	BOOL _isProcessName;

}
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)_loadBundleIdentifierOrProcessName;
-(BOOL)_isProcessName;
-(id)_initWithExecutablePath:(id)arg1 ;
-(void)dealloc;
@end

