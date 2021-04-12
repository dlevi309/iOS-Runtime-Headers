/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying> {

	IKMutableArray* _selectors;

}

@property (nonatomic,readonly) IKMutableArray * selectors;              //@synthesize selectors=_selectors - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)addSelector:(id)arg1 ;
-(id)selectorAtIndex:(unsigned long long)arg1 ;
-(IKMutableArray *)selectors;
-(id)firstSelector;
-(id)lastSelector;
@end

