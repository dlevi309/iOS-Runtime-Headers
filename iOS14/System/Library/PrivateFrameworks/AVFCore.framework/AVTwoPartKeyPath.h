/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVKeyPath.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying> {

	NSString* _topLevelKey;
	NSString* _secondLevelKey;

}

@property (nonatomic,readonly) NSString * topLevelPropertyKey;                 //@synthesize topLevelKey=_topLevelKey - In the implementation block
@property (nonatomic,readonly) NSString * secondLevelPropertyKey;              //@synthesize secondLevelKey=_secondLevelKey - In the implementation block
@property (nonatomic,readonly) NSString * keyPathString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)keyPathString;
-(NSString *)secondLevelPropertyKey;
-(id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2 ;
-(NSString *)topLevelPropertyKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

