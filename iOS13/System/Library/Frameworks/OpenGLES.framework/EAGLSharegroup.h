/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
*/


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString;

@interface EAGLSharegroup : NSObject {

	EAGLSharegroupPrivate* _private;
	NSString* debugLabel;

}

@property (nonatomic,copy) NSString * debugLabel; 
-(id)init;
-(void)dealloc;
-(void)setDebugLabel:(NSString *)arg1 ;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(NSString *)debugLabel;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(unsigned long long)APIs;
-(void)loadGLIPlugin:(_GLDPixelFormatRec*)arg1 sharedWithCompute:(BOOL)arg2 ;
-(GLISharedRecRef)getGLIShared;
@end

