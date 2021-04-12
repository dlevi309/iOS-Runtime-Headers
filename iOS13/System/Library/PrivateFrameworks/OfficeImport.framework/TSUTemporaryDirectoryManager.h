/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {

	NSURL* _baseDirectoryURL;

}
+(id)sharedManager;
+(id)baseDirectoryURL;
+(id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2 ;
+(Class)managedTemporaryDirectoryClass;
-(id)init;
-(id)newDirectoryWithFilename:(id)arg1 ;
-(id)_readDirectories;
-(void)_clearDirectories:(id)arg1 ;
@end

