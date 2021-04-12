/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {

	NSString* _serviceClassName;
	unsigned _serviceClass;
	int _relativePriority;
	BOOL _singleton;
	BOOL _main;

}

@property (nonatomic,readonly) unsigned serviceClass;              //@synthesize serviceClass=_serviceClass - In the implementation block
@property (nonatomic,readonly) int relativePriority;               //@synthesize relativePriority=_relativePriority - In the implementation block
+(id)main;
+(id)background;
+(id)utility;
+(id)userInitiated;
+(id)userInteractive;
+(id)_serviceWithClass:(unsigned)arg1 relativePriority:(int)arg2 main:(BOOL)arg3 ;
+(id)serviceWithClass:(unsigned)arg1 ;
+(id)serviceWithClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)serviceClass;
-(int)relativePriority;
-(id)_initWithClass:(unsigned)arg1 name:(id)arg2 relativePriority:(int)arg3 singleton:(BOOL)arg4 main:(BOOL)arg5 ;
@end

