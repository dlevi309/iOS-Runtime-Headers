/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableDictionary;

@interface TSUPathSet : NSObject <NSCopying> {

	NSMutableSet* mPaths;
	NSMutableDictionary* mBasePathToNumberMap;
	TSUPathSet* mUnderlyingSet;

}
+(void)processPath:(id)arg1 base:(id*)arg2 hasBaseNumber:(BOOL*)arg3 baseNumber:(unsigned*)arg4 extension:(id*)arg5 ;
+(id)parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned*)arg3 ;
-(id)init;
-(id)addPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2 ;
-(void)setUnderlyingPathSet:(id)arg1 ;
-(BOOL)isPathUsed:(id)arg1 ;
-(void)pathIsUsed:(id)arg1 ;
-(void)pathIsNoLongerUsed:(id)arg1 ;
-(void)unionPathSet:(id)arg1 ;
@end

