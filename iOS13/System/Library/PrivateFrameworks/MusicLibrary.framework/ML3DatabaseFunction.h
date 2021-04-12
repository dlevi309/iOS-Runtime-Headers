/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString;

@interface ML3DatabaseFunction : NSObject {

	int _argumentCount;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int argumentCount;              //@synthesize argumentCount=_argumentCount - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 argumentCount:(int)arg2 ;
-(BOOL)registerWithConnection:(id)arg1 ;
-(int)argumentCount;
-(void)setArgumentCount:(int)arg1 ;
@end

