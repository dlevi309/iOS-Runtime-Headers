/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSArray;

@interface SXColumnStack : NSObject {

	NSArray* _columnStack;

}

@property (nonatomic,readonly) NSArray * columnStack;              //@synthesize columnStack=_columnStack - In the implementation block
-(id)description;
-(id)componentsBeforeComponent:(id)arg1 ;
-(id)initWithNumberOfColumns:(unsigned long long)arg1 ;
-(void)addComponentBlueprint:(id)arg1 ;
-(id)componentsAfterComponent:(id)arg1 ;
-(id)allComponentsBeforeComponent:(id)arg1 ;
-(NSArray *)columnStack;
-(id)allComponentsAfterComponent:(id)arg1 ;
-(unsigned long long)rangeInBounds:(NSRange)arg1 ;
@end

