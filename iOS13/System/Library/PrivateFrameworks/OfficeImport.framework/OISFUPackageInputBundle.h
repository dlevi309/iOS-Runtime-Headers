/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/SFUInputBundle.h>

@class NSString;

@interface OISFUPackageInputBundle : NSObject <SFUInputBundle> {

	NSString* _rootPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(BOOL)hasEntryWithName:(id)arg1 ;
-(id)inputStreamForEntry:(id)arg1 ;
-(id)bufferedInputStreamForEntry:(id)arg1 ;
-(long long)lengthOfEntry:(id)arg1 ;
-(unsigned)crc32ForEntry:(id)arg1 ;
-(void)copyEntry:(id)arg1 toFile:(id)arg2 ;
-(id)_existingPathForEntryName:(id)arg1 isGz:(BOOL*)arg2 ;
@end

