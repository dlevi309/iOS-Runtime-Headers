/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSURL, NSSet;

@interface FCPersistentDictionary : NSObject {

	NSURL* _fileURL;
	NSSet* _allowedClasses;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedClasses;              //@synthesize allowedClasses=_allowedClasses - In the implementation block
-(NSSet *)allowedClasses;
-(BOOL)writeWithAccessor:(/*^block*/id)arg1 ;
-(id)init;
-(id)read;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2 ;
@end

