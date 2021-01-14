/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <libobjc.A.dylib/CRCommand.h>

@class NSDictionary, NSProgress, NSString;

@interface CRUpdateProgressCommand : NSObject <CRCommand> {

	BOOL _animatesProgress;
	unsigned long long commandDirection;
	NSDictionary* userInfo;
	unsigned long long _event;
	NSProgress* _progress;

}

@property (assign,nonatomic) unsigned long long event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL animatesProgress;                            //@synthesize animatesProgress=_animatesProgress - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSProgress *)progress;
-(id)init;
-(unsigned long long)event;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setEvent:(unsigned long long)arg1 ;
-(void)setAnimatesProgress:(BOOL)arg1 ;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1 ;
-(BOOL)animatesProgress;
@end

