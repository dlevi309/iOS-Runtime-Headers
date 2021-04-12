/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@class NSString;

@interface BKCatacomb : NSObject {

	NSString* _catacombDir;

}

@property (nonatomic,copy,readonly) NSString * catacombDir;              //@synthesize catacombDir=_catacombDir - In the implementation block
+(id)catacombWithDir:(id)arg1 ;
-(id)init;
-(id)content;
-(int)deleteFile:(id)arg1 ;
-(int)recover;
-(int)deleteAll;
-(int)writeData:(id)arg1 toFile:(id)arg2 ;
-(id)catacombCommitDir;
-(id)catacombPrepareDir;
-(int)syncDir:(id)arg1 ;
-(int)commitWrite;
-(int)readData:(id*)arg1 fromFile:(id)arg2 ;
-(NSString *)catacombDir;
@end

