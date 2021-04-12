/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)info;
-(id)initWithInfo:(id)arg1 fileURL:(id)arg2 ;
-(id)_currentFileModificationDate;
-(NSDate *)expectedDate;
-(NSURL *)fileURL;
-(BOOL)isValid;
@end

