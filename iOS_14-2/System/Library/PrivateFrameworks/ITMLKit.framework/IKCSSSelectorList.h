/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)count;
-(id)description;
-(void)addSelector:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKMutableArray *)selectors;
-(id)selectorAtIndex:(unsigned long long)arg1 ;
-(id)firstSelector;
-(id)lastSelector;
@end

