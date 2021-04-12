/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
*/


@class NSString;

@interface IOAccelMemoryOpenGLInfo : NSObject {

	int pid;
	NSString* sharegroup;
	unsigned long long objectType;
	int name;
	int blamedProcess;
	NSString* objectDescription;
	NSString* debugLabel;
	id _expansionData;

}

@property (assign) int pid; 
@property (retain) NSString * sharegroup; 
@property (assign) unsigned long long objectType; 
@property (assign) int name; 
@property (assign) int blamedProcess; 
@property (retain) NSString * objectDescription; 
@property (retain) NSString * debugLabel; 
-(void)dealloc;
-(id)description;
-(int)name;
-(void)setName:(int)arg1 ;
-(void)setDebugLabel:(NSString *)arg1 ;
-(NSString *)sharegroup;
-(unsigned long long)objectType;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setObjectType:(unsigned long long)arg1 ;
-(NSString *)debugLabel;
-(NSString *)objectDescription;
-(int)blamedProcess;
-(void)setSharegroup:(NSString *)arg1 ;
-(void)setBlamedProcess:(int)arg1 ;
-(void)setObjectDescription:(NSString *)arg1 ;
@end

