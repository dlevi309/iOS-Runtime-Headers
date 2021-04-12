/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPTPAssetReader : NSObject {

	NSString* _path;
	id _userInfo;
	BOOL _shouldDeleteTemporaryFileOnDeallocation;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)initWithTemporaryFileDeletedOnDeallocPath:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)path;
-(id)description;
-(void)dealloc;
@end

