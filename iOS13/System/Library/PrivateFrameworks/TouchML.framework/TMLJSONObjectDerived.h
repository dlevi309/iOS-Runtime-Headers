/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

