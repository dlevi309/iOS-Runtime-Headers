/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {

	NSString* _serviceClassName;
	BOOL _singleton;
	BOOL _main;
	unsigned _serviceClass;
	int _relativePriority;

}

@property (nonatomic,readonly) unsigned serviceClass;              //@synthesize serviceClass=_serviceClass - In the implementation block
@property (nonatomic,readonly) int relativePriority;               //@synthesize relativePriority=_relativePriority - In the implementation block
+(id)background;
+(id)userInteractive;
+(id)main;
+(id)serviceWithClass:(unsigned)arg1 relativePriority:(int)arg2 ;
+(id)utility;
+(id)userInitiated;
+(id)serviceWithClass:(unsigned)arg1 ;
-(id)init;
-(unsigned)serviceClass;
-(int)relativePriority;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

