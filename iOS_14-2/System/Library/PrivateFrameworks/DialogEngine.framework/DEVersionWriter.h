/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@class NSData;

@interface DEVersionWriter : NSObject <DEWriter> {

	NSData* _version;
	CC_SHA256state_st _context;

}

@property (assign,nonatomic) CC_SHA256state_st context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * version;                       //@synthesize version=_version - In the implementation block
+(id)dataWithHexString:(id)arg1 ;
+(id)versionString:(id)arg1 ;
+(id)versionToString:(id)arg1 ;
+(BOOL)prepareDirsFor:(id)arg1 ;
+(id)versionFile:(id)arg1 ;
+(id)getURLFor:(id)arg1 version:(id)arg2 base:(id)arg3 ;
+(id)versionData:(id)arg1 ;
-(id)init;
-(void)close;
-(CC_SHA256state_st)context;
-(void)writeData:(id)arg1 ;
-(void)setVersion:(NSData *)arg1 ;
-(NSData *)version;
-(void)setContext:(CC_SHA256state_st)arg1 ;
@end

