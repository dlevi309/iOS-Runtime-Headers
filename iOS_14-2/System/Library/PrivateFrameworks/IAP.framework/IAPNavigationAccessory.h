/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
*/


@class NSSet;

@interface IAPNavigationAccessory : NSObject {

	BOOL __wasFoundInLastUpdate;
	unsigned long long _identifier;
	NSSet* _components;

}

@property (assign) BOOL _wasFoundInLastUpdate;                 //@synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate - In the implementation block
@property (assign) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSSet * components;                         //@synthesize components=_components - In the implementation block
-(void)setComponents:(NSSet *)arg1 ;
-(NSSet *)components;
-(id)description;
-(unsigned long long)hash;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(BOOL)requestedSourceNameForAnyComponent;
-(BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
-(BOOL)_wasFoundInLastUpdate;
-(void)set_wasFoundInLastUpdate:(BOOL)arg1 ;
@end

