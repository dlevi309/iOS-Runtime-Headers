/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVKeyPath.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying> {

	NSString* _topLevelKey;
	NSString* _secondLevelKey;

}

@property (nonatomic,readonly) NSString * topLevelPropertyKey;                 //@synthesize topLevelKey=_topLevelKey - In the implementation block
@property (nonatomic,readonly) NSString * secondLevelPropertyKey;              //@synthesize secondLevelKey=_secondLevelKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * keyPathString; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPathString;
-(NSString *)topLevelPropertyKey;
-(NSString *)secondLevelPropertyKey;
-(id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2 ;
@end

