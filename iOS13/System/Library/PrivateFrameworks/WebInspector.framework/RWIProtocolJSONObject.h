/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolJSONObject : NSObject {

	RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> >* _object;

}
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(int)integerForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)removeKey:(id)arg1 ;
-(id)initWithJSONObject:(const Object*)arg1 ;
-(RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> >*)toJSONObject;
-(void)setJSONArray:(RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> >*)arg1 forKey:(id)arg2 ;
-(RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> >*)JSONArrayForKey:(id)arg1 ;
@end

