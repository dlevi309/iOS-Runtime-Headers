/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathExpression.h>

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression> {

	/*^block*/id _evaluatingBlock;

}

@property (nonatomic,copy) id evaluatingBlock;              //@synthesize evaluatingBlock=_evaluatingBlock - In the implementation block
-(id)evaluate:(id)arg1 :(long long)arg2 :(id)arg3 ;
-(id)evaluatingBlock;
-(id)initWithAppContext:(id)arg1 evaluatingBlock:(/*^block*/id)arg2 ;
-(void)setEvaluatingBlock:(id)arg1 ;
@end

