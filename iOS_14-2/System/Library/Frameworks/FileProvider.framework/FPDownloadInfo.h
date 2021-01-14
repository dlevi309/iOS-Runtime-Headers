/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding> {

	BOOL _recursively;

}

@property (assign,nonatomic) BOOL recursively;              //@synthesize recursively=_recursively - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)recursively;
-(void)setRecursively:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

