/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSURL, NSSet;

@interface FCSyncFileCoordinatedDictionary : NSObject {

	NSURL* _fileURL;
	NSSet* _allowedClasses;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedClasses;              //@synthesize allowedClasses=_allowedClasses - In the implementation block
-(id)init;
-(NSSet *)allowedClasses;
-(NSURL *)fileURL;
-(id)read;
-(BOOL)writeWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2 ;
@end

