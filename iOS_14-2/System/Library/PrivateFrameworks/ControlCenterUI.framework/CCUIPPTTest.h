/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CCUIPPTTest : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _beginSignpost;
	unsigned long long _endSignpost;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long beginSignpost;              //@synthesize beginSignpost=_beginSignpost - In the implementation block
@property (nonatomic,readonly) unsigned long long endSignpost;                //@synthesize endSignpost=_endSignpost - In the implementation block
+(id)testWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)beginSignpost;
-(unsigned long long)endSignpost;
-(id)_initWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3 ;
@end

