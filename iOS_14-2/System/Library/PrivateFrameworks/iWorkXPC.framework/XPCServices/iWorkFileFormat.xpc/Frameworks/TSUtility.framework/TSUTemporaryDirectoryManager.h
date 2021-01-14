/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
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

