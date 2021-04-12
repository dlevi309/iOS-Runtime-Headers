/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithTemporaryFileDeletedOnDeallocPath:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
@end

