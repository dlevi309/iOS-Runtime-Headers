/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TMLJSONObject.h>

@class TMLJSONObject, NSString;

@interface TMLJSONObjectDerived : TMLJSONObject {

	TMLJSONObject* _parent;
	NSString* _keyPath;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)rawJSON;
-(void)setRawJSON:(id)arg1 ;
-(id)initWithParent:(id)arg1 keyPath:(id)arg2 ;
-(void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2 ;
@end

