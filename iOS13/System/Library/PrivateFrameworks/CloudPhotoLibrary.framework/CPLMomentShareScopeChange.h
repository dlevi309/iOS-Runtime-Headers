/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLScopeChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLMomentShare;

@interface CPLMomentShareScopeChange : CPLScopeChange <NSSecureCoding, NSCopying> {

	CPLMomentShare* _momentShare;

}

@property (nonatomic,copy) CPLMomentShare * momentShare;              //@synthesize momentShare=_momentShare - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setMomentShare:(CPLMomentShare *)arg1 ;
-(CPLMomentShare *)momentShare;
-(void)_setupWithLibraryInfo:(id)arg1 ;
-(id)updatedLibraryInfoFromLibraryInfo:(id)arg1 didUpdate:(BOOL*)arg2 ;
@end

