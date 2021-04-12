/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)pid;
-(NSString *)sharegroup;
-(unsigned long long)objectType;
-(void)setObjectType:(unsigned long long)arg1 ;
-(int)name;
-(void)setDebugLabel:(NSString *)arg1 ;
-(id)description;
-(NSString *)debugLabel;
-(void)setName:(int)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)dealloc;
-(NSString *)objectDescription;
-(int)blamedProcess;
-(void)setSharegroup:(NSString *)arg1 ;
-(void)setBlamedProcess:(int)arg1 ;
-(void)setObjectDescription:(NSString *)arg1 ;
@end

