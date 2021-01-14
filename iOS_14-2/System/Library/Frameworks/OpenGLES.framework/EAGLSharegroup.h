/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
*/


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString;

@interface EAGLSharegroup : NSObject {

	EAGLSharegroupPrivate* _private;
	NSString* debugLabel;

}

@property (nonatomic,copy) NSString * debugLabel; 
-(void)loadGLIPlugin:(_GLDPixelFormatRec*)arg1 sharedWithCompute:(BOOL)arg2 ;
-(id)init;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(void)setDebugLabel:(NSString *)arg1 ;
-(NSString *)debugLabel;
-(unsigned long long)APIs;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(GLISharedRecRef)getGLIShared;
-(void)dealloc;
@end

