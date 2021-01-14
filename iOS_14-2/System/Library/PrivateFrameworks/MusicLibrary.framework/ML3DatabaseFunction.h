/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString;

@interface ML3DatabaseFunction : NSObject {

	int _argumentCount;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int argumentCount;              //@synthesize argumentCount=_argumentCount - In the implementation block
-(void)setArgumentCount:(int)arg1 ;
-(BOOL)registerWithConnection:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 argumentCount:(int)arg2 ;
-(int)argumentCount;
@end

