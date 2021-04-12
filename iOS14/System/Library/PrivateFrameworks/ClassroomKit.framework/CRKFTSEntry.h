/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(stat)stat;
-(NSString *)path;
-(id)initWithFTSEntry:(ftsent*)arg1 error:(id*)arg2 ;
-(id)errorForFTSEntry:(ftsent*)arg1 ;
@end

