/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice, NSString, NSURL;

@interface CLKVideo : NSObject <NSCopying> {

	CLKDevice* _device;
	NSString* _name;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)videoNamed:(id)arg1 forDevice:(id)arg2 inBundle:(id)arg3 ;
+(id)videoWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3 ;
+(id)videoNamed:(id)arg1 forDevice:(id)arg2 ;
+(id)_videoNamed:(id)arg1 device:(id)arg2 bundle:(id)arg3 modifier:(id)arg4 ;
-(NSURL *)url;
-(NSString *)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3 ;
@end

