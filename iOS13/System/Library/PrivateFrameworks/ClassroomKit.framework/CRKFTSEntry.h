/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKFTSEntry : NSObject {

	NSString* _path;
	stat _stat;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) stat stat;                         //@synthesize stat=_stat - In the implementation block
-(NSString *)path;
-(stat)stat;
-(id)initWithFTSEntry:(ftsent*)arg1 error:(id*)arg2 ;
-(id)errorForFTSEntry:(ftsent*)arg1 ;
@end

