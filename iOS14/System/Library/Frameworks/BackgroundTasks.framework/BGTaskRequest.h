/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(NSDate *)earliestBeginDate;
-(id)_initWithIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

