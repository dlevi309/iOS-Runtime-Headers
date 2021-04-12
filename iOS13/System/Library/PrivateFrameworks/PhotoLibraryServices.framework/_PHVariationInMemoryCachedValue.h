/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSDictionary, NSURL, NSDate;

@interface _PHVariationInMemoryCachedValue : NSObject {

	NSDictionary* _info;
	NSURL* _fileURL;
	NSDate* _expectedDate;

}

@property (nonatomic,readonly) NSDictionary * info;                //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSDate * expectedDate;              //@synthesize expectedDate=_expectedDate - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
-(BOOL)isValid;
-(NSURL *)fileURL;
-(NSDictionary *)info;
-(id)initWithInfo:(id)arg1 fileURL:(id)arg2 ;
-(id)_currentFileModificationDate;
-(NSDate *)expectedDate;
@end

