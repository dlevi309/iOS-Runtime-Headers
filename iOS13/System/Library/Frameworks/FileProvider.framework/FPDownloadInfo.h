/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding> {

	BOOL _recursively;

}

@property (assign,nonatomic) BOOL recursively;              //@synthesize recursively=_recursively - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)recursively;
-(void)setRecursively:(BOOL)arg1 ;
@end

