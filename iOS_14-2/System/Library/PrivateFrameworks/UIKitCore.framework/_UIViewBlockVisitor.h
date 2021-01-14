/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewVisitor.h>

@interface _UIViewBlockVisitor : _UIViewVisitor {

	/*^block*/id _visitorBlock;

}

@property (nonatomic,copy) id visitorBlock;              //@synthesize visitorBlock=_visitorBlock - In the implementation block
-(id)visitorBlock;
-(BOOL)_visitView:(id)arg1 ;
-(void)setVisitorBlock:(id)arg1 ;
-(void)dealloc;
-(id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(/*^block*/id)arg2 ;
@end

