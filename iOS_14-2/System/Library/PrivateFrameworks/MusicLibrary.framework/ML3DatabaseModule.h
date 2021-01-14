/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol ML3DatabaseModuleContext;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString;

@interface ML3DatabaseModule : NSObject {

	NSString* _name;
	sqlite3_module* _moduleMethods;
	id<ML3DatabaseModuleContext> _context;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) sqlite3_module* moduleMethods;                   //@synthesize moduleMethods=_moduleMethods - In the implementation block
@property (nonatomic,retain) id<ML3DatabaseModuleContext> context;              //@synthesize context=_context - In the implementation block
-(id<ML3DatabaseModuleContext>)context;
-(NSString *)name;
-(id)description;
-(void)setContext:(id<ML3DatabaseModuleContext>)arg1 ;
-(id)initWithName:(id)arg1 moduleMethods:(sqlite3_module*)arg2 ;
-(sqlite3_module*)moduleMethods;
@end

