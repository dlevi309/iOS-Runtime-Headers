/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@class NSString;

@interface BKCatacomb : NSObject {

	NSString* _catacombDir;

}

@property (nonatomic,copy,readonly) NSString * catacombDir;              //@synthesize catacombDir=_catacombDir - In the implementation block
+(id)catacombWithDir:(id)arg1 ;
-(id)content;
-(id)init;
-(int)deleteFile:(id)arg1 ;
-(NSString *)catacombDir;
-(int)recover;
-(int)deleteAll;
-(id)catacombPrepareDir;
-(int)syncDir:(id)arg1 ;
-(int)writeData:(id)arg1 toFile:(id)arg2 ;
-(int)readData:(id*)arg1 fromFile:(id)arg2 ;
-(id)catacombCommitDir;
-(int)commitWrite;
@end

