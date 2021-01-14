/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
-(id<IKEntityValueProviding>)entityValueProvider;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id)_valueForEntityProperty:(id)arg1 ;
@end

