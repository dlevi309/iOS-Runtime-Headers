/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
*/

#import <BackgroundTasks/BackgroundTasks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface BGTaskRequest : NSObject <NSCopying> {

	NSString* _identifier;
	NSDate* _earliestBeginDate;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSDate * earliestBeginDate;                  //@synthesize earliestBeginDate=_earliestBeginDate - In the implementation block
+(id)_requestFromActivity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(NSDate *)earliestBeginDate;
@end

