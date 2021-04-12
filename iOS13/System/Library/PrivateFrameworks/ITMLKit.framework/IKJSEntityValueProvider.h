/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSEntityValueProvider.h>

@protocol IKJSEntityValueProvider <JSExport>
@required
-(id)valueForEntityProperty:(id)arg1;
-(id)valuesForEntityProperties:(id)arg1;

@end


@protocol IKEntityValueProviding;
@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider> {

	id<IKEntityValueProviding> _entityValueProvider;

}

@property (nonatomic,retain) id<IKEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
-(id)_valueForEntityProperty:(id)arg1 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id<IKEntityValueProviding>)entityValueProvider;
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
@end

